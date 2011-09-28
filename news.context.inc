<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function news_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news_article' => 'news_article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'News*' => 'News*',
      ),
    ),
  );
  $context->reactions = array(
    'theme' => array(
      'title' => 'news',
      'subtitle' => '',
      'class' => 'news',
    ),
  );
  $context->condition_mode = 0;
  $export['news'] = $context;

  return $export;
}
