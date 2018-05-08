# 2. Insertar por lo menos 20 pacientes
INSERT INTO pacientes(nombre, apellido) VALUES("Floretta", "Bergmann");
INSERT INTO pacientes(nombre, apellido) VALUES("Jeffery", "Judy");
INSERT INTO pacientes(nombre, apellido) VALUES("Mi", "Milliman");
INSERT INTO pacientes(nombre, apellido) VALUES("Hassan", "Pientka");
INSERT INTO pacientes(nombre, apellido) VALUES("Marisol", "Troha");
INSERT INTO pacientes(nombre, apellido) VALUES("Minerva", "Boothe");
INSERT INTO pacientes(nombre, apellido) VALUES("Kacie", "Reppe");
INSERT INTO pacientes(nombre, apellido) VALUES("Ted", "Geater");
INSERT INTO pacientes(nombre, apellido) VALUES("Christin", "Broeckel");
INSERT INTO pacientes(nombre, apellido) VALUES("Elin", "Vandermolen");
INSERT INTO pacientes(nombre, apellido) VALUES("Natashia", "Shaneyfelt");
INSERT INTO pacientes(nombre, apellido) VALUES("Alysha", "Strek");
INSERT INTO pacientes(nombre, apellido) VALUES("Earle", "Capella");
INSERT INTO pacientes(nombre, apellido) VALUES("Joslyn", "Runels");
INSERT INTO pacientes(nombre, apellido) VALUES("Adelaide", "Janos");
INSERT INTO pacientes(nombre, apellido) VALUES("Barbera", "Doughan");
INSERT INTO pacientes(nombre, apellido) VALUES("Yee", "Tangney");
INSERT INTO pacientes(nombre, apellido) VALUES("Shoshana", "Ferjerang");
INSERT INTO pacientes(nombre, apellido) VALUES("Ivory", "Millet");
INSERT INTO pacientes(nombre, apellido) VALUES("Raelene", "Mcilhinney");

# 3. Insertar por lo menos 5 especialidades
INSERT INTO especialidades(nombre) VALUES("gastroenterologo");
INSERT INTO especialidades(nombre) VALUES("nerurologo");
INSERT INTO especialidades(nombre) VALUES("neonatologo");
INSERT INTO especialidades(nombre) VALUES("urologo");
INSERT INTO especialidades(nombre) VALUES("ginecologo");

# 1. Insertar por lo menos 10 médicos
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Li", "Hallahan", 2);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Marlin", "Storozuk", 3);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Kaley", "Waldroup", 4);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Jenniffer", "Lovenduski", 1);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Everett", "Faidley", 3);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Debera", "Takayama", 5);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Sheridan", "Lafont", 1);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Vallie", "Mayhan", 2);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Doris", "Bleser", 4);
INSERT INTO medicos(nombre, apellido, especialidad_id) VALUES("Susanne", "Rucci", 2);

# 4. Insertar 10 tipos de medicamentos
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("yQocnrLGoVyKI", 80, 44);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("BDzE", 36, 28);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("LqfjzZURHOlAj", 44, 69);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("RVjPSIAiFzasjo", 26, 10);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("frVZHlYVkmuAGL", 51, 53);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("vPlMu", 78, 6);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("EkeICBWmHYBvTKUjxXCE", 76, 53);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("BGoOypdotsZRR", 24, 86);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("vaJMVfuVPEFljlkG", 5, 33);
INSERT INTO medicamentos(nombre, precio, cantidad) VALUES("tJR", 9, 78);

# 5. Insertar 5 tipos de servicios 
INSERT INTO servicios(nombre, precio) VALUES("radiografias", 2);
INSERT INTO servicios(nombre, precio) VALUES("quimioterapias", 88);
INSERT INTO servicios(nombre, precio) VALUES("analisis sanguineo", 86);
INSERT INTO servicios(nombre, precio) VALUES("electrocardiograma", 64);
INSERT INTO servicios(nombre, precio) VALUES("nebulizaciones", 65);

# extras
INSERT INTO consultas(paciente_id, medico_id) VALUES(15, 10);
INSERT INTO consultas(paciente_id, medico_id) VALUES(1, 10);
INSERT INTO consultas(paciente_id, medico_id) VALUES(6, 3);
INSERT INTO consultas(paciente_id, medico_id) VALUES(12, 7);
INSERT INTO consultas(paciente_id, medico_id) VALUES(19, 5);
INSERT INTO consultas(paciente_id, medico_id) VALUES(18, 4);
INSERT INTO consultas(paciente_id, medico_id) VALUES(19, 3);
INSERT INTO consultas(paciente_id, medico_id) VALUES(2, 1);
INSERT INTO consultas(paciente_id, medico_id) VALUES(17, 9);
INSERT INTO consultas(paciente_id, medico_id) VALUES(6, 3);
INSERT INTO consultas(paciente_id, medico_id) VALUES(16, 5);
INSERT INTO consultas(paciente_id, medico_id) VALUES(6, 1);
INSERT INTO consultas(paciente_id, medico_id) VALUES(4, 3);
INSERT INTO consultas(paciente_id, medico_id) VALUES(18, 10);
INSERT INTO consultas(paciente_id, medico_id) VALUES(9, 4);
INSERT INTO consultas(paciente_id, medico_id) VALUES(15, 5);
INSERT INTO consultas(paciente_id, medico_id) VALUES(11, 4);
INSERT INTO consultas(paciente_id, medico_id) VALUES(6, 9);
INSERT INTO consultas(paciente_id, medico_id) VALUES(11, 3);
INSERT INTO consultas(paciente_id, medico_id) VALUES(18, 1);

INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(4, 4);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(11, 3);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(4, 10);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(6, 3);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(20, 6);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(13, 3);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(19, 8);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(17, 4);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(17, 5);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(3, 4);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(15, 10);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(16, 10);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(16, 5);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(2, 6);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(10, 4);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(4, 10);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(11, 9);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(18, 5);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(5, 3);
INSERT INTO gastos_medicamentos(consulta_id, medicamento_id) VALUES(10, 6);

INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(6, 1);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(5, 4);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(17, 5);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(1, 1);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(19, 1);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(12, 2);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(12, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(2, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(19, 2);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(19, 5);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(18, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(3, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(10, 1);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(13, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(14, 5);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(9, 4);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(9, 3);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(9, 4);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(19, 1);
INSERT INTO gastos_servicios(consulta_id, servicio_id) VALUES(9, 1);


# 1. Conocer todos los nombres y apellidos de los pacientes internados en el hospital
SELECT CONCAT(nombre, " ", apellido) AS full_nombre
FROM pacientes;

# 2. Conocer el nombre de los pacientes que acuden a la especialidad de neurología
SELECT CONCAT(p.nombre, " ", p.apellido) AS patient, CONCAT(d.nombre, " ", d.apellido) AS doctor, s.nombre AS specialty
FROM pacientes as p
INNER JOIN consultas AS c ON p.id = c.paciente_id
INNER JOIN medicos AS d ON d.id = c.medico_id
INNER JOIN especialidades AS s ON s.id = d.especialidad_id
WHERE s.nombre LIKE "nerurologo";

# 3. Conocer  los pacientes que tienen mayor cantidad de pagos de medicamentos
SELECT CONCAT(p.nombre, " ", p.apellido) AS patient, SUM(m.precio) AS total
FROM pacientes as p
INNER JOIN consultas AS c ON p.id = c.paciente_id
INNER JOIN gastos_medicamentos AS me ON me.consulta_id = c.id
INNER JOIN medicamentos AS m ON me.medicamento_id = m.id
GROUP BY p.id
ORDER BY total DESC;

# 4. Conocer los pacientes que tienen mas de un servicios
SELECT CONCAT(p.nombre, " ", p.apellido) AS patient, COUNT(*) AS total
FROM pacientes as p
INNER JOIN consultas AS c ON p.id = c.paciente_id
INNER JOIN gastos_servicios AS se ON se.consulta_id = c.id
INNER JOIN servicios AS s ON se.servicio_id = s.id
GROUP BY p.id
ORDER BY total DESC;

# 5. Conocer la cantidad de pacientes que acuden a la especialidad de gastroenterología
SELECT CONCAT(p.nombre, " ", p.apellido) AS patient, CONCAT(d.nombre, " ", d.apellido) AS doctor, s.nombre AS specialty
FROM pacientes as p
INNER JOIN consultas AS c ON p.id = c.paciente_id
INNER JOIN medicos AS d ON d.id = c.medico_id
INNER JOIN especialidades AS s ON s.id = d.especialidad_id
WHERE s.nombre LIKE "gastroenterologo";

# 6. Conocer los médicos que tienen más pacientes
SELECT CONCAT(d.nombre, " ", d.apellido) AS doctor, COUNT(*) AS total
FROM medicos AS d
INNER JOIN consultas AS c ON d.id = c.medico_id
GROUP BY d.id
ORDER BY total DESC;
