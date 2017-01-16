(function ($) {
  Drupal.behaviors.misesUtility = {
    attach: function (context, settings) {
      var regForm = $('#edit-field-registration-link');
      var regLink = $('#edit-field-registration-link-external');

      initRegistration(regForm, regLink);

      function initRegistration (regForm, regLink) {
        var type = $('#edit-field-registration-type .form-radios')
        var typeVal = type.find('input[type="radio"]:checked').val();
        regForm.hide();
        regLink.hide();

        if (typeVal === 'onsite') {
          regForm.show();
        }
        else if (typeVal === 'offsite') {
          regLink.show();
        }
      }
    }
  };
})(jQuery);

