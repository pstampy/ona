<?php

/**
 * @file
 * Defines a naked three-column layout with a main content area.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Office of Northern Australia'),
  'category' => t('Omega content layouts'),
  'icon' => 'ona-level-2.png',
  'theme' => 'ona_level_2',
  'regions' => array(
  	'main' => t('Main Content Area'),
    'left' => t('Left Column'),
    'right-content' => t('Right Content'),
  ),
);
