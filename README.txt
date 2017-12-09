MRI Sticky Control

What does the Module do:
The Module ensures that a definable content type always has exactly one node with the attribute "sticky".
The module ensures also the following things:
- There exist always one published node of the defined content type in the system
- Exactly one node of the type is sticky at all times. This results:
		When creating a new node with the attribute sticky, all other nodes lose the sticky status at the same time
		If the only sticky node is set to unsticky, the contribution is saved as "sticky". The editor receives a message on the screen.
		If a sticky node is deleted and there are other published nodes of the type, then the latest published node automatically gets the sticky status.
		If a sticky node is deleted and there are only unpublished nodes of the type, automatically the most up-to-date node receives the sticky status.
		If a sticky node is deleted and there are no other nodes of the type, the node is not deleted. The editor receives a message on the screen.
		In addition, will

Problems and Procedures:
There are many different ways to delete nodes. Batches, deleting nodes by other modules (e.g., rules), etc.
This module only intercepts the standard deletions.
For this reason, there is a fallback. A fallback node can be defined, this node can not be deleted easily.
E-mail notifications can be configured in addition to the on-screen messages.

Watchdog connection available.
Automated tests planned.


Was das Modul tut:
Ein frei definierbarer Inhaltstyp verfügt immer über genau eine Node mit dem Attribut "sticky".
Das Modul stellt folgende Dinge sicher:
- Es existiert immer mindestens eine veröffentlichte Node des definierten Inhaltstyp im System
- Genau eine Node des Typs ist zu jedem Zeitpunkt sticky. Daraus resultiert:
		Beim anlegen einer neuen Node mit dem Attribut sticky, verlieren gleichzeitig alle anderen Nodes den sticky Status
		Wird bei der einzigen Sticky Node auf unsticky gesetzt, so wird der Beitrag als "sticky" gespeichert. Der Redakteur erhält einen Hinweis auf dem Bildschirm.
		Wird eine sticky Node gelöscht und es existieren noch andere veröffentlichte Nodes des Typs, so erhält automatisch die aktuellste veröffentlichte Node den sticky Status. 
		Wird eine sticky Node gelöscht und es existieren ausschließlich unveröffentlichte Nodes des Typs, so erhält automatisch die aktuellste Node den sticky Status. 
		Wird eine sticky Node gelöscht und es existiert keine andere Nodes des Typs, so wird die Node nicht gelöscht. Der Redakteur erhält einen Hinweis auf dem Bildschirm.
		Zudem wird
	
Probleme und Verfahrensweisen:
Es existieren viele verschiedene Methoden um Nodes zu löschen. Stapelverarbeitungen, löschen von Nodes durch andere Module (z.B. Rules) etc. 
Dieses Modul fängt lediglich die Standard Löschvorgänge ab.
Aus diesem Grund existiert ein Fallback. Es kann eine Fallback Node definiert werden, diese Node kann nicht ohne weiteres gelöscht werden.
E-Mailbenachrichtigungen können zusätzlich zu den Bildschirmmeldungen konfiguriert werden.

Watchdog Anbindung vorhanden.
Automated Tests geplant.
