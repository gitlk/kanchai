<li  class="dropdown nav-dropdown"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></li>


                <li class="dropdown nav-dropdown"> 
                   {dede:channel  type="son" }
                    <a href="javascript:;" class="has-drop-menu">{dede:field name='typename'/}<i class="arrow"></i></a>
                    <ul class="dropdown-menu">
                        <div class="sort channel clearfix">
                            <p class="title">{dede:field name='typename'/}</p>
                            <ul>
                            </ul>
                        </div>
                        <div class="tags channel clearfix">
                            <ul>

                                <li><a href='[field:typeurl/]' [field:rel/]>[field:typename/]</a></li>
                               
                            </ul>
                        </div>
                    </ul>
                     {/dede:channel}
                </li>