#include <gtk/gtk.h>

static void activate (GtkApplication *app, gpointer user_data)
{
  GtkWidget *window;
  GtkWidget *button;
  //Declare window and set properties 
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Gtk Boilerplate App");
  gtk_window_set_default_size (GTK_WINDOW (window), 500,700);

  gtk_window_present (GTK_WINDOW (window));
}

int main (int argc, char **argv) {
  //main app
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.dunn.gtkdemoapp", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
