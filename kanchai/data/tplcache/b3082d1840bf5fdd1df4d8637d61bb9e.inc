<li  class="dropdown nav-dropdown">
                           {dede:field name=typeid runphp="yes"}
                                global $dsql;
                                $sql = "SELECT id From `lk_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
                                $row = $dsql->GetOne($sql); 
                                @me=is_array($row)?"<a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>":'                    <a href="javascript:;" class="has-drop-menu">科技快报<i class="arrow"></i></a>
                    <ul class="dropdown-menu">
                        <div class="sort channel clearfix">
                            <p class="title">科技快报</p>
                            <ul>
                            </ul>
                        </div>
                        <div class="tags channel clearfix">
                            <ul>
                            {dede:channel  type="son" noself='yes'}
                            <li><a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a></li>
                            {/dede:channel}
                            </ul>
                        </div>
                    </ul>';
                                {/dede:field}
                                
                                </li>