<?php

/**
 * Implements hook_panels_layouts().
 */
$plugin = array(
  'title' => t('OS2Web Fuld Bredde'),
  'category' => t('CMS Theme'),
  'icon' => 'os2web_fuldbredde.png',
  'theme' => 'panels_os2web_fuldbredde',
  'theme arguments' => array('id', 'content'),
  'admin css' => 'os2web_fuldbredde_admin.css',
  'regions' => array(
    'top_right' => t('Top'),
    'bottom' => t('Bottom'),
  ),
);
