CREATE DATABASE IF NOT EXISTS popcorntime;

USE popcorntime;

CREATE TABLE creators(
	id int(11) NOT NULL AUTO_INCREMENT,
	name varchar(50) NOT NULL,
	nationality varchar(50) NOT NULL,
	institute varchar(50) NOT NULL,
	PRIMARY KEY(id)
);

CREATE TABLE movies(
	id int(11) NOT NULL AUTO_INCREMENT,
	name varchar(50) NOT NULL,
	samples int(11) NOT NULL,
	author_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(author_id) REFERENCES creators(id)
);

CREATE TABLE language(
	id int(11) NOT NULL AUTO_INCREMENT,
	language varchar(8) NOT NULL UNIQUE,
	PRIMARY KEY(id)
);

CREATE TABLE language_movies(
	id int(11) NOT NULL AUTO_INCREMENT,
	movie_id int(11) NOT NULL,
	language_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(movie_id) REFERENCES movies(id),
	FOREIGN KEY(language_id) REFERENCES language(id)
);

CREATE TABLE themes(
	id int(11) NOT NULL AUTO_INCREMENT,
	theme varchar(15) NOT NULL UNIQUE,
	PRIMARY KEY(id)
);

CREATE TABLE themes_movies(
	id int(11) NOT NULL AUTO_INCREMENT,
	movie_id int(11) NOT NULL,
	theme_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(movie_id) REFERENCES movies(id),
);

CREATE TABLE associates(
	id int(11) NOT NULL AUTO_INCREMENT,
	type varchar(5) NOT NULL UNIQUE,
	PRIMARY KEY(id)
);

CREATE TABLE borrowing(
	id int(11) NOT NULL AUTO_INCREMENT,
	name varchar(50) NOT NULL,
	loanDate TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
	deliveryDate datetime NOT NULL,
	movie_id int(11) NOT NULL,
	partnerType_id int(11) NOT NULL,
	PRIMARY KEY(id),
	FOREIGN KEY(movie_id) REFERENCES movies(id),
	FOREIGN KEY(partnerType_id) REFERENCES associates(id)
);
