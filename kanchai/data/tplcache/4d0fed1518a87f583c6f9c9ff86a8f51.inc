{dede:field name=typeid runphp="yes"}
                global $dsql;
                $sql = "SELECT id From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                $row = $dsql->GetOne($sql); 
                if(is_array($row)){
                               

                }else{
                <li  class="dropdown nav-dropdown"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></li>
                }
                {/dede:field}