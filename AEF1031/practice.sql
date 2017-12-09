
CREATE TABLE estudiantes(
	id int AUTO_INCREMENT NOT NULL,
	nombre varchar(254),
	telefono varchar(10),
	PRIMARY KEY(id)
);

CREATE TABLE carreras(
	id int AUTO_INCREMENT NOT NULL,
	nombre varchar(254),
	descripcion varchar(254),
	totalCreditos int,
	PRIMARY KEY(id)
);

CREATE TABLE materias(
	id int AUTO_INCREMENT NOT NULL,
	carrera_id int,
	descripcion varchar(254),
	creditos int,
	PRIMARY KEY(id),
	FOREIGN KEY (carrera_id) REFERENCES carreras(id)

);

CREATE TABLE semestres(
	id int AUTO_INCREMENT NOT NULL,
	materia_id int,
	descripcion varchar(254),
	PRIMARY KEY(id),
	FOREIGN KEY (materia_id) REFERENCES materias(id)
);

CREATE TABLE kardexs(
	id int AUTO_INCREMENT NOT NULL,
	materia_id int,
	semestres_id int,
	carrera_id int,
	estudiante_id int,
	calificacion int,
	PRIMARY KEY(id),
	FOREIGN KEY (materia_id) REFERENCES materias(id),
	FOREIGN KEY (semestres_id) REFERENCES semestres(id),
	FOREIGN KEY (carrera_id) REFERENCES carreras(id),
	FOREIGN KEY (estudiante_id) REFERENCES estudiantes(id)
);

INSERT INTO estudiantes(nombre, telefono) VALUES ("Carlos", 331312);
INSERT INTO estudiantes(nombre, telefono) VALUES ("Jesus", 331315);
INSERT INTO estudiantes(nombre, telefono) VALUES ("Jorge", 331314);

INSERT INTO carreras(nombre, descripcion, totalCreditos) VALUES ("Quimica", "abcd", 100);
INSERT INTO carreras(nombre, descripcion, totalCreditos) VALUES ("Sistemas", "abcd", 200);
INSERT INTO carreras(nombre, descripcion, totalCreditos) VALUES ("Jorge", "abcd", 300);

INSERT INTO materias(carrera_id, descripcion, creditos) VALUES (1, "abcd", 10);
INSERT INTO materias(carrera_id, descripcion, creditos) VALUES (3, "abcd", 20);
INSERT INTO materias(carrera_id, descripcion, creditos) VALUES (2, "abcd", 30);

INSERT INTO semestres(materia_id, descripcion) VALUES (3, "abcd");
INSERT INTO semestres(materia_id, descripcion) VALUES (2, "abcd");
INSERT INTO semestres(materia_id, descripcion) VALUES (1, "abcd");

INSERT INTO kardexs(materia_id, semestres_id, carrera_id, estudiante_id, calificacion) VALUES (3, 2, 1, 3, 100);
INSERT INTO kardexs(materia_id, semestres_id, carrera_id, estudiante_id, calificacion) VALUES (1, 3, 2, 1, 100);
INSERT INTO kardexs(materia_id, semestres_id, carrera_id, estudiante_id, calificacion) VALUES (2, 1, 3, 2, 100);
