<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function news_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_news_display_video',
  'field_name' => 'field_news_article_video',
  'type' => 'news_article',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
$items[] = array (
  'control_field_name' => 'field_news_display_image',
  'field_name' => 'field_news_article_image',
  'type' => 'news_article',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
return $items;
}
