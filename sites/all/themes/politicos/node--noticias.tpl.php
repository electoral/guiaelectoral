<article id="node-<?php print $node->nid; ?>" class="row <?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <div class="politic-picture col-md-4">
    <?php print render($content['field_image']); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_url']);
      hide($content['field_image']);
      hide($content['body']);
      print render($content);
    ?>
  </div>
  </div>

  <div class="politic-data col-md-8">
  	<?php print render($title_prefix); ?>
			<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  	<?php print render($title_suffix); ?>

  	<div class="politic-partidos politic-data-element">
			<?php print render($content['body']); ?>
  	</div>

  	<div class="politic-cargos politic-data-element">
			<?php print render($content['field_url']); ?>
  	</div>
  </div>


  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
