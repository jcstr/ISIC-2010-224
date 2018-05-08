CREATE DATABASE IF NOT EXISTS hospital;

USE hospital;

CREATE TABLE pacientes(
	id int(11) NOT NULL AUTO_INCREMENT,
	nombre varchar(50) NOT NULL,
	apellido varchar(50) NOT NULL,
	PRIMARY KEY(id)
);

CREATE TABLE especialidades(
	id int(11) NOT NULL AUTO_INCREMENT,
	nombre varchar(50) NOT NULL,
	PRIMARY KEY(id)
);

CREATE TABLE medicos(
	id int(11) NOT NULL AUTO_INCREMENT,
	nombre varchar(50) NOT NULL,
	apellido varchar(50) NOT NULL,
	especialidad_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(especialidad_id) REFERENCES especialidades(id)
);

CREATE TABLE medicamentos(
	id int(11) NOT NULL AUTO_INCREMENT,
	nombre varchar(50) NOT NULL,
	cantidad int(11) NOT NULL,
	precio int(11) NOT NULL,
	PRIMARY KEY(id)
);

CREATE TABLE servicios(
	id int(11) NOT NULL AUTO_INCREMENT,
	nombre varchar(50) NOT NULL,
	precio int(11) NOT NULL,
	PRIMARY KEY(id)
);

CREATE TABLE consultas(
	id int(11) NOT NULL AUTO_INCREMENT,
	medico_id int(11) NOT NULL,
	paciente_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(medico_id) REFERENCES medicos(id),
	FOREIGN KEY(paciente_id) REFERENCES pacientes(id)
);

CREATE TABLE gastos_medicamentos(
	id int(11) NOT NULL AUTO_INCREMENT,
	consulta_id int(11) NOT NULL,
	medicamento_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(medicamento_id) REFERENCES medicamentos(id)
);

CREATE TABLE gastos_servicios(
	id int(11) NOT NULL AUTO_INCREMENT,
	consulta_id int(11) NOT NULL,
	servicio_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(consulta_id) REFERENCES consultas(id),
	FOREIGN KEY(servicio_id) REFERENCES servicios(id)
);
