<article id="node-<?php print $node->nid; ?>" class="row <?php print $classes; ?> clearfix"<?php print $attributes; ?>>


  <div class="politic-picture col-md-3">
		<?php print render($content['field_imagen']); ?>
  </div>

  <div class="politic-data col-md-9">
  	<?php print render($title_prefix); ?>
			<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  	<?php print render($title_suffix); ?>

  	<div class="politic-partidos politic-data-element">
			<?php print render($content['body']); ?>
  	</div>

  	<div class="politic-cargos politic-data-element">
			<?php print render($content['field_politico_cargos']); ?>
  	</div>
		
  	<div class="politic-partidos politic-data-element">
			<?php print render($content['field_partidos']); ?>
  	</div>
	
  <div class="content politic-data-element" <?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_politico_cargos']);
      hide($content['field_partidos']);
      hide($content['field_imagen']);
      hide($content['body']);

      print render($content);
    ?>
  </div>

  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
