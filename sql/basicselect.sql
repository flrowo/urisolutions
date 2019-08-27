-- wrong
select name from customers where state like RS
select name from customers where state like "RS"
select name from customers where state = "RS"
select name from customers where state = 'RS'

-- correct:
select customers.name from customers where customers.state = 'RS'
