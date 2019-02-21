select 
    pd.name, 
    pv.name 
from 
    products as pd 
join 
    providers as pv 
on 
    pd.id_providers = pv.id 
and 
    pd.id_categories = 6;
