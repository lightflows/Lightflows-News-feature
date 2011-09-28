<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News article'),
      'module' => 'features',
      'description' => t('This content type can be used for adding News to your website.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => t('The title field is used as the main headline for your article. The body field is the where you add the main copy.
You can also add an images, video, file attachments and related articles to your news.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function news_views_api() {
  return array(
    'api' => '2',
  );
}
