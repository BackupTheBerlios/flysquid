/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#include<gtk/gtk.h>
#include<stdio.h>
  
int i;
char buf[128];
int main(int argc, char *argv[])
 {
    GtkWidget *window;
    GtkWidget *menu;
    GtkWidget *menu_bar;
    GtkWidget *root_menu;
    GtkWidget *menu_items;
    GtkWidget *vbox;
    GtkWidget *button;

   gtk_init (&argc,&argv);
   window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
   gtk_widget_set_size_request (GTK_WIDGET (window), 500, 400);
   gtk_window_set_title (GTK_WINDOW (window), "Flysquid" );
   menu = gtk_menu_new ();
   /*       for (i = 0; i < 10; i++)
        {
           


            sprintf (buf, "Test-undermenu - %d", i);

          
            menu_items = gtk_menu_item_new_with_label (buf);

          
            gtk_menu_shell_append (GTK_MENU_SHELL (menu), menu_items);

	  
	    g_signal_connect_swapped (G_OBJECT (menu_items), "activate",
		                      G_CALLBACK (menuitem_response), 
                                      (gpointer) g_strdup (buf)); 

             Show the widget
            gtk_widget_show (menu_items);
        } */


   root_menu = gtk_menu_item_new_with_label ("squid start");
  
   gtk_widget_show (root_menu);
       gtk_menu_item_set_submenu (GTK_MENU_ITEM (root_menu), menu);

    /* A vbox to put a menu and a button in: */
    vbox = gtk_vbox_new (FALSE, 0);
    gtk_container_add (GTK_CONTAINER (window), vbox);
    gtk_widget_show (vbox);

    /* Create a menu-bar to hold the menus and add it to our main window */
    menu_bar = gtk_menu_bar_new ();
    gtk_box_pack_start (GTK_BOX (vbox), menu_bar, FALSE, FALSE, 2);
    gtk_widget_show (menu_bar);

    /* Create a button to which to attach menu as a popup */
    button = gtk_button_new_with_label ("TODO");
    /*    g_signal_connect_swapped (G_OBJECT (button), "event",
	                      G_CALLBACK (button_press), 
                              G_OBJECT (menu));*/
    gtk_box_pack_end (GTK_BOX (vbox), button, TRUE, TRUE, 2);
    gtk_widget_show (button);

    /* And finally we append the menu-item to the menu-bar -- this is the
     * "root" menu-item I have been raving about =) */
    gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), root_menu);

    /* always display the window as the last step so it all splashes on
     * the screen at once. */


   gtk_widget_show (window);
   gtk_main ();
   return 0;
 }

