<?php
/**
 * @file
 * Plain layout template, simply printing the content areas in divs.
 */
?>
<div class="main-content">
	<?php print $content['main']; ?>
</div>
<div class="left-column">
	<?php print $content['left']; ?>
</div>
<div class="right-content">
	<?php print $content['right-content']; ?>
</div>
