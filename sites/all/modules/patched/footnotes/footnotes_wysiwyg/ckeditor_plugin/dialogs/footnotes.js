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
        var textarea = current_editor.find('textarea');
        var textarea_id = textarea.getItem(0);
        var footnote_editor_id = jQuery(textarea_id).attr('id');
  
        // Replace the Footnote textarea with a CKEditor instance.
        CKEDITOR.replace(footnote_editor_id, {
          contentsCss: ['/sites/all/themes/bootsass/stylesheets/footnote_fakes.css'],
          toolbar: [
            { name: 'basicstyles', items : [ 'Bold','Italic', 'Underline', 'Link', 'Unlink', 'Styles', 'Source' ] },
          ],
          stylesSet: 'footnoteStyles',
          enterMode: CKEDITOR.ENTER_BR,
          autoParagraph : true,
          resize_enabled : true,
          autoGrow_minHeight : 80,
          removePlugins : 'footnotes',
          startupFocus: true
        });
       },
      onOk : function() {
        var current_editor = this.getElement();
        var textarea = current_editor.find('textarea');
        var textarea_id = textarea.getItem(0);
        var footnote_editor_id = jQuery(textarea_id).attr('id');
        
        var content = CKEDITOR.instances[footnote_editor_id].getData();
        CKEDITOR.plugins.footnotes.createFootnote( editor, this.realObj, content, this.getValueOf('info', 'value'));
        delete this.fakeObj;
        delete this.realObj;

        CKEDITOR.instances[footnote_editor_id].destroy();

      },
      onCancel : function() {
        var current_editor = this.getElement();
        var textarea = current_editor.find('textarea');
        var textarea_id = textarea.getItem(0);
        var footnote_editor_id = jQuery(textarea_id).attr('id');

        CKEDITOR.instances[footnote_editor_id].destroy();
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