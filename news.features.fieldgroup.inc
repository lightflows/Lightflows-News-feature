<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function news_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_display_controls
  $groups['news_article-group_display_controls'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_display_controls',
    'label' => 'Display Controls',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_news_display_video',
      '1' => 'field_news_display_image',
    ),
  );

  // Exported group: group_news_article_image_group
  $groups['news_article-group_news_article_image_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_news_article_image_group',
    'label' => 'Article image',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Add an image to your page - you can switch the image on/off from the display control tab. If you aren\'t seeing anything here, you have most likely switched your image off.',
      ),
      'display' => array(
        'weight' => '-1',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_news_article_image',
    ),
  );

  // Exported group: group_news_article_video_group
  $groups['news_article-group_news_article_video_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_news_article_video_group',
    'label' => 'Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => 'Add video to your page - you can switch video on/off from the display control tab. If you aren\'t seeing anything here, you have most likely switched video off.',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_news_article_video',
    ),
  );

  // Exported group: group_news_attachments_group
  $groups['news_article-group_news_attachments_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_news_attachments_group',
    'label' => 'File Attachments',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_news_article_files',
    ),
  );

  // Exported group: group_news_gallery_image_group
  $groups['news_article-group_news_gallery_image_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_news_gallery_image_group',
    'label' => 'Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_news_article_gallery',
    ),
  );

  // Exported group: group_news_related_articles
  $groups['news_article-group_news_related_articles'] = array(
    'group_type' => 'standard',
    'type_name' => 'news_article',
    'group_name' => 'group_news_related_articles',
    'label' => 'Related articles',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'sticky' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'news_node' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_news_related_articles',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article image');
  t('Display Controls');
  t('File Attachments');
  t('Gallery');
  t('Related articles');
  t('Video');

  return $groups;
}
