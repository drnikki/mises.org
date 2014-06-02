BootSass - Theme integrating Bootstrap and Sass with special features for Drupal HTML and CSS class usage.

This theme is based on the Bootstrap contributed theme: https://drupal.org/project/bootstrap . However, this theme is not a sub-theme for the Bootstrap theme and is not dependent on having the Bootstrap theme installed or enabled.

BootSass replaces Bootstrap's use of the Bootstrap CDN with the Bootstrap Sass files: https://github.com/twbs/bootstrap-sass . Please see the directory structure below for more details. The native Bootstrap Sass files are included to allow use of the Sass @extend feature to extend Bootstap layout styles to Drupal HTML/CSS patterns. Using @extend will help prevent unneeded additions of CSS classes and allow more semantic classes.

====================================
REQUIREMENTS:

jQuery v1.7: Bootstrap requires a minimum jQuery version of 1.7 to function properly. You must download and enable the jQuery Update (http://drupal.org/project/jquery_update/) module, 7.x-2.3 version or higher. Navigate to the configuration page and ensure that the minimum version selected is 1.7.

Ruby/SASS/Compass: If the server doesn't already have Ruby installed, please see https://www.ruby-lang.org/en/downloads/ . Then use these commands to install Sass and Compass:
gem update --system
gem install compass (installs both sass and compass)

In the theme folder:
sass -v (to check that sass is installed; it should return something like "Sass 3.3.3 (Maptastic Maple)")
compass -v (to verify that compass was installed)
(The project is already created so you don't need to run "compass create /path/to/project")
compass init (NEED TO VERIFY THIS WITH A NEW INSTALLATION)

=====================================
RECOMMENDATIONS AND SUGGESTIONS:

These modules are recommended but not required. Using these modules will reduce the need for custom styles.

Display Suite Bootstrap Layouts: https://drupal.org/project/ds_bootstrap_layouts 
If Display Suite is used for layouts, this module can reduce some of the customization of the layout. However, prudent use of classes in the DS configuration is also effective.

====================================
TO USE:

1. Install as you would normally install a Drupal theme. Until this theme is added as a Drupal project, upload this entire folder to the sites/all/themes directory. Then enable the theme. 

2. Customize styles by editing and/or adding necessary files in the /sass/ folder:

-- a. Bootstrap folder:
Use only for the official bootstrap-sass sass files. DO NOT EDIT any of these files unless replacing with updated version from https://github.com/twbs/bootstrap-sass

-- b. Drupal folder:
Use only to extend bootstrap definitions to Drupal-specific elements, such as Views, Display Suite, or other Drupal-specific ways of handling HTML/CSS.

-- c. Custom folder:
Use this folder to override bootstrap-sass files as well as custom styles not originally styled by a bootstrap definition. To override bootstrap definitions, create a new file with the exact same name as the related ./sass/bootstrap scss file, and edit as needed. After adding the new custom file here, update styles.scss to reference the new file by changing the path from bootstrap/* to custom/* . See the variables customization as an example.

When updating the official bootstrap-sass files in the Bootstrap folder, review all related sass sheets in the Custom folder and update as needed. 

3. All scss is compiled into stylesheets/styles.css. Use one of these two methods:

-- a. Before editing and saving scss files, run "compass watch" in the command line. The css file will automatically be compiled whenever a scss file is updated.

-- b. After editing and saving a scss file, run "compass compile" in the command line.

