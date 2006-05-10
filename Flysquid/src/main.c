/* 
 * Copyright (C) 2005 Jeffrin <ahiliation@yahoo.co.in>
 * 
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
#include<gdk/gdk.h>

GtkWidget *FSstartwindow;
startserver   ()
{
	
        FSstartwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_type_hint(FSstartwindow,GDK_WINDOW_TYPE_HINT_MENU);
	gtk_window_set_resizable(FSstartwindow,FALSE);
	gtk_widget_set_size_request (GTK_WIDGET (FSstartwindow), 200, 100);
        gtk_window_set_title (GTK_WINDOW(FSstartwindow), "FlySquid" );
	gtk_widget_show(FSstartwindow);
} 

  
int main(int argc, char *argv[])
 {
GtkWidget *mainwindow;
GtkWidget *buttonFSstop;
GtkWidget *buttonFSstart;
GtkWidget *buttonFSdebug;
GtkWidget *buttonFSadmin;
GtkWidget *buttonFShelp;
GtkWidget *mainhbox;
GtkWidget *mainvbox;
GtkWidget *maintoolbar;

gtk_init (&argc,&argv);
    

mainwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
mainhbox = gtk_hbox_new (TRUE, 0);
maintoolbar = gtk_toolbar_new ();
mainvbox = gtk_vbox_new (FALSE,0);


buttonFSstart =  gtk_toolbar_append_item\
(GTK_TOOLBAR (maintoolbar),"FS start" ,"Start Server",NULL,NULL,NULL,NULL);
buttonFSstop  =  gtk_toolbar_append_item\
(GTK_TOOLBAR (maintoolbar),"FS stop" ,"Stop Server",NULL,NULL,NULL,NULL);
buttonFSdebug =  gtk_toolbar_append_item\
(GTK_TOOLBAR (maintoolbar),"FS debug" ,"Debug Server",NULL,NULL,NULL,NULL);
buttonFSadmin =  gtk_toolbar_append_item\
(GTK_TOOLBAR (maintoolbar),"FS admin" ,"On Fly Administration" ,NULL,NULL,NULL,NULL);
buttonFShelp  =  gtk_toolbar_append_item\
(GTK_TOOLBAR (maintoolbar),"FS help" ,"Help",NULL,NULL,NULL,NULL);
	 
gtk_box_pack_start (GTK_BOX (mainhbox), maintoolbar, FALSE,FALSE,10);
gtk_box_pack_start (GTK_BOX (mainvbox), mainhbox, FALSE,FALSE,10);
gtk_container_add (GTK_CONTAINER (mainwindow), mainvbox);

gtk_widget_set_size_request (GTK_WIDGET (mainwindow), 600, 400);
gtk_window_set_title (GTK_WINDOW(mainwindow), "FlySquid -  Multipurpose Squid Front End" );
gtk_toolbar_set_orientation (GTK_TOOLBAR (maintoolbar), GTK_ORIENTATION_HORIZONTAL);
gtk_toolbar_set_style (GTK_TOOLBAR (maintoolbar), GTK_TOOLBAR_BOTH);
gtk_container_set_border_width (GTK_CONTAINER (maintoolbar), 5);


gtk_widget_show_all(mainwindow);

g_signal_connect (G_OBJECT (buttonFSstart), "clicked",G_CALLBACK (startserver), NULL);



gtk_main ();
   return 0;
}
