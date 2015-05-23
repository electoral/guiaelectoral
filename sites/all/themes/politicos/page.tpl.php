<header id="header" class="main-header <?php print $secondary_menu ? 'with-secondary-menu': 'without-secondary-menu'; ?>">

  <div class="container">
    <h1 class="main-heading">
      <a class="" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
    </h1>
  </div>

</header> <!-- /main-header -->

<main class="container main-content">

  <?php if ($messages): ?>
    <div id="messages"><div class="section clearfix">
      <?php print $messages; ?>
    </div></div> <!-- /.section, /#messages -->
  <?php endif; ?>

  <?php if ($breadcrumb): ?>
    <div id="breadcrumb"><?php print $breadcrumb; ?></div>
  <?php endif; ?>

  <?php if ($page['page_top']): ?>
    <div class="page-top">
      <?php print render($page['page_top']); ?>
    </div>
  <?php endif; ?>

  <div id="content" class="row">
    <?php print render($title_prefix); ?>

    <?php print render($title_suffix); ?>
    <?php if ($tabs): ?>
      <div class="tabs">
        <?php print render($tabs); ?>
      </div>
    <?php endif; ?>

    <?php print render($page['content']); ?>
  </div><!-- /.content -->

  <?php if ($page['bottom']): ?>
  <div class="page-bottom row">
    <?php print render($page['bottom']); ?>
  <div>
  <?php endif; ?>
</main>

<footer id="footer-wrapper" class="main-footer container">
  <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</footer>

