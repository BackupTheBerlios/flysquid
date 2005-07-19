/***************************************************************************
 *            uiflysquid.c
 *
 *  Sat Jul 16 13:48:52 2005
 *  Copyright  2005  Jeffrin Jose
 *  ahiliation@yahoo.co.in
 ****************************************************************************/

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


   menu = gtk_menu_new (void);
	
   //	 static GtkItemFactoryEntry menu_items[] = {
   // { "/_File",         NULL,         NULL,           0, "<Branch>" },
   //{ "/_Options",      NULL,         NULL,           0, "<Branch>" },
   //};
   
   root_menu = gtk_menu_item_new_with_label ("FS start");
   gtk_menu_item_set_submenu (GTK_MENU_ITEM (root_menu), menu);

    
    vbox = gtk_vbox_new (FALSE, 0);
    gtk_container_add (GTK_CONTAINER (window), vbox);
    menu_bar = gtk_menu_bar_new ();
    gtk_box_pack_start (GTK_BOX (vbox), menu_bar, FALSE, FALSE, 2);
    gtk_widget_show (menu_bar);
    button = gtk_button_new_with_label ("TODO");
    gtk_box_pack_end (GTK_BOX (vbox), button, TRUE, TRUE, 2);
    gtk_menu_shell_append (GTK_MENU_SHELL (menu_bar), root_menu);
