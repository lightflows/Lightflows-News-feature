<?php

/**
 * Implementation of hook_content_default_fields().
 */
function news_content_default_fields() {
  $fields = array();

  // Exported field: field_news_article_files
  $fields['news_article-field_news_article_files'] = array(
    'field_name' => 'field_news_article_files',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_news_attachments_group',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-93',
      'news_teaser_detailed' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'footer',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_files',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-95',
      ),
      'news_teaser_simple' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_files',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-91',
      ),
      'news_teaser_simple_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_files',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-90',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser_images' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'pdf doc docx xls xlsx csv rtf txt',
      'file_path' => 'news_articles/files_attachments/[date-in-tz]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '4M',
      'max_filesize_per_node' => '4M',
      'filefield_sources' => array(
        'imce' => 'imce',
        'remote' => 'remote',
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'File Attachments',
      'weight' => '2',
      'description' => 'Add additional resources to this news article. You can add PDF\'s, text documents and Microsoft Word ann Excel files.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_news_article_gallery
  $fields['news_article-field_news_article_gallery'] = array(
    'field_name' => 'field_news_article_gallery',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_news_gallery_image_group',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__Grid_12_1_square_thumbnail__original',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-100',
      'news_teaser_detailed' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_gallery',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-91',
      ),
      'news_teaser_simple' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_gallery',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-93',
      ),
      'news_teaser_simple_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_gallery',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-92',
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'news_teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'news_teaser_images' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'news_articles/gallery_images/[date-in-tz]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '4M',
      'max_filesize_per_node' => '4M',
      'max_resolution' => '1024x768',
      'min_resolution' => '320x200',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'remote' => 'remote',
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Gallery',
      'weight' => '1',
      'description' => 'You can add multiple images here which will make a gallery on your news page',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_news_article_image
  $fields['news_article-field_news_article_image'] = array(
    'field_name' => 'field_news_article_image',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_news_article_image_group',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'Grid_12_3_default',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-97',
      'news_teaser_detailed' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'Grid_12_2_landscape_2_3rd_aspect_linked',
        'css-class' => '',
        'region' => 'left',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-97',
      ),
      'news_teaser_simple' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_image',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-88',
      ),
      'news_teaser_simple_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'Grid_12_1_landscape_2_3rd_aspect_linked',
        'css-class' => '',
        'region' => 'left',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_news_article_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-99',
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'news_teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'news_teaser_images' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'news_articles/images/[date-in-tz]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '4M',
      'max_filesize_per_node' => '4M',
      'max_resolution' => '1024x768',
      'min_resolution' => '320x200',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'filefield_sources' => array(
        'imce' => 'imce',
        'remote' => 'remote',
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Article image',
      'weight' => '-1',
      'description' => 'Add an image to this article. The image will be displayed in at the top of the article and may or may not be displayed alongside teaser (summaries) of news articles on your site.
Tip: You may drag and drop images from your desktop onto the upload button.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_news_article_video
  $fields['news_article-field_news_article_video'] = array(
    'field_name' => 'field_news_article_video',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_news_article_video_group',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'video_video',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-98',
      'news_teaser_detailed' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'Grid-12-12_Slideshow-940x250-crop-center_default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_news_article_video',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-90',
      ),
      'news_teaser_simple' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'Grid-12-12_Slideshow-940x250-crop-center_default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_news_article_video',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-92',
      ),
      'news_teaser_simple_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'Grid-12-12_Slideshow-940x250-crop-center_default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'emvideo',
        'parent_id' => '',
        'field_id' => 'field_news_article_video',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-91',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser_images' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '620',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '310',
      'preview_height' => '255',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 'title',
        'description' => 'description',
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'emthumb' => 1,
      'emthumb_label' => 'Video custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the Video thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => 'news_articles/video-thumbnails',
      'emthumb_custom_alt' => 1,
      'emthumb_custom_title' => 1,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 1,
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
          'emthumb' => array(
            'emthumb' => array(
              'emthumb' => '',
            ),
          ),
          'emvideo' => array(
            'title' => '',
            'description' => '',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '-2',
      'description' => 'Add a video to this news article by pasting in the video URL here. To find the URL, browser to the video on YouTube or Vimeo and copy the URL from the browsers address bar.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_news_display_image
  $fields['news_article-field_news_display_image'] = array(
    'field_name' => 'field_news_display_image',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '12',
      'parent' => 'group_display_controls',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_node' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Off
1|On',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '1',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display image',
      'weight' => '12',
      'description' => 'Show or hide the article image',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_news_display_video
  $fields['news_article-field_news_display_video'] = array(
    'field_name' => 'field_news_display_video',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '11',
      'parent' => 'group_display_controls',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_node' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Off
1|On',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '1',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display video',
      'weight' => '11',
      'description' => 'Show or hide this articles video.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_news_related_articles
  $fields['news_article-field_news_related_articles'] = array(
    'field_name' => 'field_news_related_articles',
    'type_name' => 'news_article',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_news_related_articles',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-94',
      'news_teaser_detailed' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_news_related_articles',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-89',
      ),
      'news_teaser_simple' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_news_related_articles',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-90',
      ),
      'news_teaser_simple_image' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_news_related_articles',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-89',
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'sticky' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'news_teaser_images' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'news_article' => 'news_article',
      'page' => 'page',
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related articles',
      'weight' => '3',
      'description' => 'Choose other articles or pages that may be of interest to the reader. These will be displayed at the bottom of your main article.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Article image');
  t('Display image');
  t('Display video');
  t('File Attachments');
  t('Gallery');
  t('Related articles');
  t('Video');

  return $fields;
}
