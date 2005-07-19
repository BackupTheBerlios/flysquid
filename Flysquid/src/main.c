/* Copyright (C) 2005 Jeffrin Jose <ahiliation@yahoo.co.in>
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
    GtkWidget *window;
    GtkWidget *menu;
    GtkWidget *menu_bar;
    GtkWidget *root_menu;
    GtkWidget *menu_items;
    GtkWidget *vbox;
    GtkWidget *button;

int main(int argc, char *argv[])
 {
   gtk_init (&argc,&argv);
   window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
   gtk_widget_set_size_request (GTK_WIDGET (window), 500, 400);
   gtk_window_set_title (GTK_WINDOW(window), "FlySquid - Fast Highly Configurable NETWORK PROXY" );
   gtk_widget_show (root_menu);
   gtk_widget_show (vbox);
   gtk_widget_show (menu_bar);
   gtk_widget_show (button);
   gtk_widget_show (window);
   gtk_main ();
   return 0;
 }
