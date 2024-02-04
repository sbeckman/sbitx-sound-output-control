static gboolean on_resize(GtkWidget *widget, GdkEventConfigure *event, gpointer user_data) {
	screen_width = event->width;
	screen_height = event->height;
	if (screen_height < 430)				// N3SB Hack
		screen_height = 430;				// N3SB Hack
//	else
//		layout_ui();
	printf("screen_height changed to: %d\n", screen_height);					// N3SB Hack
//	gtk_container_resize_children(GTK_CONTAINER(window));
//	gtk_widget_set_default_size(display_area, screen_width, screen_height);
	layout_ui();	// N3SB Hack
	return FALSE;
}
