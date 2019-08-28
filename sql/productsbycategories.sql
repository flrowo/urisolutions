select c.name as "name", sum(p.amount) as "sum" --name of the tables as "name" and "sum"
from products as p, categories as c where p.id_categories = c.id group by c.name --c.name not c.id
