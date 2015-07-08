(function() {
  function footnotesDialog( editor, isEdit ) {
    return {
      title : Drupal.t('Footnotes Dialog'),
      minWidth : 500,
      minHeight : 50,
      contents : [
        {
          id: 'info',
          label: Drupal.t('Add a footnote'),
          title: Drupal.t('Add a footnote'),
          elements:
          [
            {
              id: 'footnote',
              type: 'textarea',
              label: Drupal.t('Footnote text :'),
              onLoad : function () {
                console.log('onload this ',this);
                // Workaround.  CKEditor 3.x does not add the ID to the input,
                // just a wrapper <div> several levels above.  Add a class explicitly here
                // so we can find the textarea easily later.
                //var footnote_id = this.getElement().getId();
                //var footnoteWrapper = jQuery("#" + footnote_id);
                //var input_id = this.getInputElement().getId();
                //console.log('input_id ',input_id);
                //var textarea = jQuery(".cke_dialog_ui_input_textarea textarea", footnoteWrapper);
                //textarea.addClass('footnote-textarea');
                //console.log('footnoteWrapper ', footnoteWrapper);
              },
              setup: function (element) {
                if (isEdit)
                  this.setValue(element.getHtml());
              }
            },
            {
              id: 'value',
              type: 'text',
              label: Drupal.t('Value :'),
              labelLayout: 'horizontal',
              style: 'float:left;width:100px;',
              setup: function (element) {
                if (isEdit)
                  this.setValue(element.getAttribute('value'));
              }
            }
          ],
        }
      ],
      onShow : function() {
        console.log('onShow this ',this);
        if (isEdit) {
          this.fakeObj = CKEDITOR.plugins.footnotes.getSelectedFootnote( editor );
          this.realObj = editor.restoreRealElement( this.fakeObj );
        }
        this.setupContent( this.realObj );
        var current_editor_id = this.getParentEditor().id;
        var current_editor = this.getElement();
        //console.log('current_editor ',current_editor);
        var textarea = current_editor.find('textarea');
        //console.log('textarea ',textarea);
        var textarea_id = textarea.getItem(0);
        //console.log('textarea_id ',textarea_id);
        var footnote_editor_id = jQuery(textarea_id).attr('id');
        //console.log('onshow ',footnote_editor_id);
  
        // Replace the Footnote textarea with a CKEditor instance.
        CKEDITOR.replace(footnote_editor_id, {
          toolbar: [
            { name: 'basicstyles', items : [ 'Bold','Italic', 'Underline', 'Link', 'Unlink' ] }
          ],
          enterMode: CKEDITOR.ENTER_BR,
          autoParagraph : true,
          resize_enabled : false,
          autoGrow_minHeight : 80,
          removePlugins : 'footnotes',
          startupFocus: true
        });
       },
      onOk : function() {
        //console.log('onOk this ',this);
        var current_editor = this.getElement();
        //console.log('onOk current_editor ',current_editor);
        var textarea = current_editor.find('textarea');
        //console.log('onOk textarea ',textarea);
        var textarea_id = textarea.getItem(0);
        //console.log('onOk textarea_id ',textarea_id);
        var footnote_editor_id = jQuery(textarea_id).attr('id');
        
        //console.log('what are we looking for on OK ',CKEDITOR.instances[footnote_editor_id]);
        var content = CKEDITOR.instances[footnote_editor_id].getData();
        CKEDITOR.plugins.footnotes.createFootnote( editor, this.realObj, content, this.getValueOf('info', 'value'));
        delete this.fakeObj;
        delete this.realObj;

        //console.log('what are we looking for on OK ',CKEDITOR.instances[footnote_editor_id]);
        CKEDITOR.instances[footnote_editor_id].destroy();
        //console.log('should be destroyed on OK ',CKEDITOR.instances[footnote_editor_id]);

      },
      onCancel : function() {
        //console.log('onCancel this ',this);
        var current_editor = this.getElement();
        //console.log('onCancel current_editor ',current_editor);
        var textarea = current_editor.find('textarea');
        //console.log('onCancel textarea ',textarea);
        var textarea_id = textarea.getItem(0);
        //console.log('onCancel textarea_id ',textarea_id);
        var footnote_editor_id = jQuery(textarea_id).attr('id');

        //console.log('what are we looking for on cancel ',CKEDITOR.instances[footnote_editor_id]);
        CKEDITOR.instances[footnote_editor_id].destroy();
        //console.log('should be destroyed on cancel ',CKEDITOR.instances[footnote_editor_id]);
      }
    };
  }

  CKEDITOR.dialog.add( 'createfootnotes', function( editor ) {
    return footnotesDialog( editor );
  });
  CKEDITOR.dialog.add( 'editfootnotes', function( editor ) {
    return footnotesDialog( editor, 1 );
  });
})();