<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:News
  $menu_links['primary-links:News'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'News',
    'router_path' => 'News',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'title' => 'News articles',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News');


  return $menu_links;
}
