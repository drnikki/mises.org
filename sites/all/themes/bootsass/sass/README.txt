Bootstrap folder:
Use only for the official bootstrap-sass sass files. DO NOT EDIT any of these files unless replacing with updated version from https://github.com/twbs/bootstrap-sass

Drupal folder:
Use only to extend bootstrap definitions to Drupal-specific elements, such as Views, Display Suite, or other Drupal-specific ways of handling HTML/CSS.

Custom folder:
Use this folder to override bootstrap-sass files as well as custom styles not originally styled by a bootstrap definition. To override bootstrap definitions, create a new file with the exact same name as the related ./sass/bootstrap scss file, and edit as needed. After adding the new custom file here, update styles.scss to reference the new file by changing the path from bootstrap/* to custom/* . See the variables customization as an example.

When updating the official bootstrap-sass files in the Bootstrap folder, review all related sass sheets in the Custom folder and update as needed.
