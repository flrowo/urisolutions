select c.name as "name", sum(p.amount) as "sum"
from products as p, categories as c where p.id_categories = c.id group by c.name
