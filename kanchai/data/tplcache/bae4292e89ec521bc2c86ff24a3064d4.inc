{dede:field name=typeid runphp="yes"}
                                global $dsql;
                                $sql = "SELECT id From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                                $row = $dsql->GetOne($sql); 
                                @me=is_array($row)?'1':'2';
                                {/dede:field}
                                
                                <li  class="dropdown nav-dropdown"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></li>