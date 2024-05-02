#					# steht vor Kommentaren
# Tabelle 'Umfrage' anlegen
#
CREATE TABLE Umfrage (
  Id int,
  Dauer int,
  Sport varchar(30),		# String variabler L�nge, max 30
  Geschlecht char(1),
  PRIMARY KEY(Id)		# Prim�rschl�ssel, 
					# F�r das identifizierende Attribut
) ;

#
# Daten in Tabelle 'Person' einfuegen
#
INSERT INTO Umfrage VALUES(1, 20, "Fussball", "m");
INSERT INTO Umfrage VALUES(2, 20, "Tennis", "w");
INSERT INTO Umfrage VALUES(3, 10, "Fussball", "m");
INSERT INTO Umfrage VALUES(4, 30, "Jogging", "w");
INSERT INTO Umfrage VALUES(5, 30, "Jogging", "m");
INSERT INTO Umfrage VALUES(6, 20, "Tennis", "w");
INSERT INTO Umfrage VALUES(7, 20, "Fussball", "w");
INSERT INTO Umfrage VALUES(8, 40, "Fussball", "m");


