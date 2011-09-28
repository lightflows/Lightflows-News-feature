<?php

/**
 * Implementation of hook_strongarm().
 */
function news_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_anim_speed_news_article';
  $strongarm->value = 'normal';
  $export['c_fields_anim_speed_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_animation_news_article';
  $strongarm->value = '1';
  $export['c_fields_animation_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_edit_news_article';
  $strongarm->value = '1';
  $export['c_fields_edit_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_js_news_article';
  $strongarm->value = '1';
  $export['c_fields_js_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_reset_default_news_article';
  $strongarm->value = 0;
  $export['c_fields_reset_default_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_show_all_news_article';
  $strongarm->value = 0;
  $export['c_fields_show_all_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'c_fields_view_news_article';
  $strongarm->value = '1';
  $export['c_fields_view_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_news_article';
  $strongarm->value = 0;
  $export['comment_anonymous_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_news_article';
  $strongarm->value = '3';
  $export['comment_controls_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_news_article';
  $strongarm->value = '4';
  $export['comment_default_mode_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_news_article';
  $strongarm->value = '1';
  $export['comment_default_order_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_news_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_news_article';
  $strongarm->value = '0';
  $export['comment_form_location_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_news_article';
  $strongarm->value = '0';
  $export['comment_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_news_article';
  $strongarm->value = '1';
  $export['comment_preview_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_news_article';
  $strongarm->value = '1';
  $export['comment_subject_field_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_news_article';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '4',
    'author' => '5',
    'options' => '6',
    'comment_settings' => '8',
    'menu' => '-4',
    'path' => '7',
  );
  $export['content_extra_weights_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_formatter_news_article';
  $strongarm->value = 'Grid_12_2_default';
  $export['dragndrop_uploads_formatter_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_hide_news_article';
  $strongarm->value = 0;
  $export['dragndrop_uploads_hide_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dragndrop_uploads_widget_news_article';
  $strongarm->value = 'a:3:{s:5:"field";s:24:"field_news_article_image";s:6:"module";s:9:"filefield";s:6:"widget";s:10:"imagefield";}';
  $export['dragndrop_uploads_widget_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_news_article';
  $strongarm->value = 'form-713986f533e684524339b43316f2bda4';
  $export['form_build_id_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__api_key';
  $strongarm->value = '';
  $export['media_vimeo__api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__api_secret';
  $strongarm->value = '';
  $export['media_vimeo__api_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__color';
  $strongarm->value = '#01AAEA';
  $export['media_vimeo__color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__color_override';
  $strongarm->value = 0;
  $export['media_vimeo__color_override'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__full_screen';
  $strongarm->value = 1;
  $export['media_vimeo__full_screen'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__on_screen_info';
  $strongarm->value = array(
    'portrait' => 'portrait',
    'title' => 'title',
    'byline' => 'byline',
  );
  $export['media_vimeo__on_screen_info'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__thumb_size';
  $strongarm->value = '160';
  $export['media_vimeo__thumb_size'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_vimeo__universal';
  $strongarm->value = 1;
  $export['media_vimeo__universal'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__api_key';
  $strongarm->value = '';
  $export['media_youtube__api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_duplicates';
  $strongarm->value = 0;
  $export['media_youtube__check_for_duplicates'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_failed';
  $strongarm->value = 0;
  $export['media_youtube__check_for_failed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__check_for_rejected';
  $strongarm->value = 0;
  $export['media_youtube__check_for_rejected'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__colors_color1';
  $strongarm->value = '#FFFFFF';
  $export['media_youtube__colors_color1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__colors_color2';
  $strongarm->value = '#CCCCCC';
  $export['media_youtube__colors_color2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__cron_limit';
  $strongarm->value = '50';
  $export['media_youtube__cron_limit'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__cron_time';
  $strongarm->value = '10';
  $export['media_youtube__cron_time'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__display_info';
  $strongarm->value = 0;
  $export['media_youtube__display_info'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__full_screen';
  $strongarm->value = 1;
  $export['media_youtube__full_screen'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__high_quality';
  $strongarm->value = 0;
  $export['media_youtube__high_quality'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__html5_player';
  $strongarm->value = 0;
  $export['media_youtube__html5_player'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_border';
  $strongarm->value = 0;
  $export['media_youtube__show_border'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_colors';
  $strongarm->value = 0;
  $export['media_youtube__show_colors'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_related_videos';
  $strongarm->value = 0;
  $export['media_youtube__show_related_videos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_0';
  $strongarm->value = '';
  $export['media_youtube__status_display_0'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_duplicates';
  $strongarm->value = '';
  $export['media_youtube__status_display_duplicates'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_rejected';
  $strongarm->value = '';
  $export['media_youtube__status_display_rejected'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_display_upload_failed';
  $strongarm->value = '';
  $export['media_youtube__status_display_upload_failed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__status_update_frequency';
  $strongarm->value = '0';
  $export['media_youtube__status_update_frequency'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__store_raw_metadata';
  $strongarm->value = 0;
  $export['media_youtube__store_raw_metadata'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__use_jw_flv';
  $strongarm->value = 0;
  $export['media_youtube__use_jw_flv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__youtube_password';
  $strongarm->value = '';
  $export['media_youtube__youtube_password'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__youtube_username';
  $strongarm->value = '';
  $export['media_youtube__youtube_username'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_article_pattern';
  $strongarm->value = 'News/[dd]/[mm]/[yyyy]/[title-raw]';
  $export['pathauto_node_news_article_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_news_article';
  $strongarm->value = '0';
  $export['upload_news_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_settings_news_article';
  $strongarm->value = array(
    0 => 'form_id',
    1 => 'fieldsets',
  );
  $export['vertical_tabs_settings_news_article'] = $strongarm;

  return $export;
}
