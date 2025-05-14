create database polleria;
use polleria;

create table receta(
	id_receta int auto_increment unique primary key,
	pasos int not null,
	cantidades decimal default (0)
);

create table cliente(
	id_cliente int auto_increment unique primary key,
	nombre varchar(15) not null,
	teléfono int,
	direccion varchar(15)	
);

create table producto(
	id_producto int auto_increment unique primary key,
	descripcion varchar(30),
	nombre varchar(20) not null,
	precio decimal default (0),
	stock int default 0,
	id_receta int,
	foreign key (id_receta) references receta(id_receta),
	check (precio > 1)
);

create table empleado(
	id_empleado int auto_increment unique primary key,
	nombre varchar(15) not null,
	sueldo decimal default (0),
	cargo varchar(15) not null
);

 create table cocina(
	id_cocina int auto_increment unique primary key,
	id_producto int,
	id_empleado int,
	foreign key (id_producto) references producto(id_producto),
	foreign key (id_empleado) references empleado(id_empleado)
);

create table pedido(
	id_pedido int auto_increment unique primary key,
	fecha date,
	productos varchar(30) not null,
	precio decimal default (0),
	cantidad int default 1,
	id_cliente int,
	foreign key (id_cliente) references cliente(id_cliente),
	check (precio > 1)
);

 create table arma(
	id_arma int auto_increment unique primary key,
	id_pedido int,
	id_empleado int,
	foreign key (id_pedido) references pedido(id_pedido),
	foreign key (id_empleado) references empleado(id_empleado)
);

create table proveedor(
	id_proveedor int auto_increment unique primary key,
	nombre varchar(15) not null,
	teléfono int,
	direccion varchar(15)
);

create table ingrediente(
	id_ingrediente int auto_increment unique primary key,
	stock int default 0,
	nombre varchar(15) not null
);

create table provee(
	id_provee int auto_increment unique primary key,
	id_proveedor int,
	id_ingrediente int,
	foreign key (id_proveedor) references proveedor(id_proveedor),
	foreign key (id_ingrediente) references ingrediente(id_ingrediente)
);
create table requiere(
	id_requiere int auto_increment unique primary key,
	id_receta int,
	id_ingrediente int,
	foreign key (id_receta) references receta(id_receta),
	foreign key (id_ingrediente) references ingrediente(id_ingrediente)
);

create table factura(
	id_factura int auto_increment unique primary key,
	tipo_de_pago varchar(15) not null,
	monto decimal default (0),
	id_pedido int,
	foreign key (id_pedido) references pedido(id_pedido),
  	check (monto > 1)
);

