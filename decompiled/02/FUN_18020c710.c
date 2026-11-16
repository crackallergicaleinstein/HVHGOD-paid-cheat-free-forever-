// FUN_18020c710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020c710 */

undefined8 FUN_18020c710(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  undefined8 local_128;
  undefined8 uStack_120;
  char local_118 [256];
  
  if (param_3 == 0x26) {
    return 3;
  }
  if (param_3 == 0x29) {
    return 2;
  }
  local_128 = 0x6b5f6e6f70616577;
  uStack_120 = 0x6566696e;
  iVar4 = strncmp(param_2,(char *)&local_128,0xc);
  if (iVar4 != 0) {
    builtin_strncpy(local_118,"weapon_bayonet",0xf);
    local_118[0xf] = '\0';
    pcVar5 = param_2;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[(longlong)(local_118 + -(longlong)param_2)];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      local_128 = 0x5f6e6f70616577;
      uStack_120 = 0;
      iVar4 = strncmp(param_2,(char *)&local_128,7);
      if (iVar4 == 0) {
        builtin_strncpy(local_118 + 0x60,"weapon_flashbang",0x11);
        local_118[0x71] = '\0';
        local_118[0x72] = '\0';
        local_118[0x73] = '\0';
        local_118[0x74] = '\0';
        local_118[0x75] = '\0';
        local_118[0x76] = '\0';
        local_118[0x77] = '\0';
        local_118[0x78] = '\0';
        local_118[0x79] = '\0';
        local_118[0x7a] = '\0';
        local_118[0x7b] = '\0';
        local_118[0x7c] = '\0';
        local_118[0x7d] = '\0';
        local_118[0x7e] = '\0';
        local_118[0x7f] = '\0';
        pcVar5 = param_2;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[(longlong)(local_118 + (0x60 - (longlong)param_2))];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) {
          builtin_strncpy(local_118 + 0x80,"weapon_hegrenade",0x11);
          local_118[0x91] = '\0';
          local_118[0x92] = '\0';
          local_118[0x93] = '\0';
          local_118[0x94] = '\0';
          local_118[0x95] = '\0';
          local_118[0x96] = '\0';
          local_118[0x97] = '\0';
          local_118[0x98] = '\0';
          local_118[0x99] = '\0';
          local_118[0x9a] = '\0';
          local_118[0x9b] = '\0';
          local_118[0x9c] = '\0';
          local_118[0x9d] = '\0';
          local_118[0x9e] = '\0';
          local_118[0x9f] = '\0';
          pcVar5 = param_2;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[(longlong)(local_118 + (0x80 - (longlong)param_2))];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) {
            builtin_strncpy(local_118 + 0xb0,"ade",4);
            local_118[0xb4] = '\0';
            local_118[0xb5] = '\0';
            local_118[0xb6] = '\0';
            local_118[0xb7] = '\0';
            local_118[0xb8] = '\0';
            local_118[0xb9] = '\0';
            local_118[0xba] = '\0';
            local_118[0xbb] = '\0';
            local_118[0xbc] = '\0';
            local_118[0xbd] = '\0';
            local_118[0xbe] = '\0';
            local_118[0xbf] = '\0';
            builtin_strncpy(local_118 + 0xa0,"weapon_smokegren",0x10);
            pcVar5 = param_2;
            do {
              cVar1 = *pcVar5;
              cVar2 = pcVar5[(longlong)(local_118 + (0xa0 - (longlong)param_2))];
              if (cVar1 != cVar2) break;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            if (cVar1 != cVar2) {
              builtin_strncpy(local_118 + 0x10,"weapon_molotov",0xf);
              local_118[0x1f] = '\0';
              pcVar5 = param_2;
              do {
                cVar1 = *pcVar5;
                cVar2 = pcVar5[(longlong)(local_118 + (0x10 - (longlong)param_2))];
                if (cVar1 != cVar2) break;
                pcVar5 = pcVar5 + 1;
              } while (cVar2 != '\0');
              if (cVar1 != cVar2) {
                builtin_strncpy(local_118 + 0x20,"weapon_decoy",0xd);
                local_118[0x2d] = '\0';
                local_118[0x2e] = '\0';
                local_118[0x2f] = '\0';
                pcVar5 = param_2;
                do {
                  cVar1 = *pcVar5;
                  cVar2 = pcVar5[(longlong)(local_118 + (0x20 - (longlong)param_2))];
                  if (cVar1 != cVar2) break;
                  pcVar5 = pcVar5 + 1;
                } while (cVar2 != '\0');
                if (cVar1 != cVar2) {
                  builtin_strncpy(local_118 + 0xc0,"weapon_incgrenade",0x12);
                  local_118[0xd2] = '\0';
                  local_118[0xd3] = '\0';
                  local_118[0xd4] = '\0';
                  local_118[0xd5] = '\0';
                  local_118[0xd6] = '\0';
                  local_118[0xd7] = '\0';
                  local_118[0xd8] = '\0';
                  local_118[0xd9] = '\0';
                  local_118[0xda] = '\0';
                  local_118[0xdb] = '\0';
                  local_118[0xdc] = '\0';
                  local_118[0xdd] = '\0';
                  local_118[0xde] = '\0';
                  local_118[0xdf] = '\0';
                  pcVar5 = param_2;
                  do {
                    cVar1 = *pcVar5;
                    cVar2 = pcVar5[(longlong)(local_118 + (0xc0 - (longlong)param_2))];
                    if (cVar1 != cVar2) break;
                    pcVar5 = pcVar5 + 1;
                  } while (cVar2 != '\0');
                  if (cVar1 != cVar2) {
                    builtin_strncpy(local_118 + 0x30,"weapon_c4",10);
                    local_118[0x3a] = '\0';
                    local_118[0x3b] = '\0';
                    local_118[0x3c] = '\0';
                    local_118[0x3d] = '\0';
                    local_118[0x3e] = '\0';
                    local_118[0x3f] = '\0';
                    pcVar5 = param_2;
                    do {
                      cVar1 = *pcVar5;
                      cVar2 = pcVar5[(longlong)(local_118 + (0x30 - (longlong)param_2))];
                      if (cVar1 != cVar2) break;
                      pcVar5 = pcVar5 + 1;
                    } while (cVar2 != '\0');
                    if (cVar1 != cVar2) {
                      builtin_strncpy(local_118 + 0xe0,"weapon_healthshot",0x12);
                      local_118[0xf2] = '\0';
                      local_118[0xf3] = '\0';
                      local_118[0xf4] = '\0';
                      local_118[0xf5] = '\0';
                      local_118[0xf6] = '\0';
                      local_118[0xf7] = '\0';
                      local_118[0xf8] = '\0';
                      local_118[0xf9] = '\0';
                      local_118[0xfa] = '\0';
                      local_118[0xfb] = '\0';
                      local_118[0xfc] = '\0';
                      local_118[0xfd] = '\0';
                      local_118[0xfe] = '\0';
                      local_118[0xff] = '\0';
                      pcVar5 = param_2;
                      do {
                        cVar1 = *pcVar5;
                        cVar2 = pcVar5[(longlong)(local_118 + (0xe0 - (longlong)param_2))];
                        if (cVar1 != cVar2) break;
                        pcVar5 = pcVar5 + 1;
                      } while (cVar2 != '\0');
                      if (cVar1 != cVar2) {
                        builtin_strncpy(local_118 + 0x40,"weapon_taser",0xd);
                        local_118[0x4d] = '\0';
                        local_118[0x4e] = '\0';
                        local_118[0x4f] = '\0';
                        pcVar5 = param_2;
                        do {
                          cVar1 = *pcVar5;
                          cVar2 = pcVar5[(longlong)(local_118 + (0x40 - (longlong)param_2))];
                          if (cVar1 != cVar2) break;
                          pcVar5 = pcVar5 + 1;
                        } while (cVar2 != '\0');
                        if (cVar1 != cVar2) {
                          lVar3 = 0x50 - (longlong)param_2;
                          builtin_strncpy(local_118 + 0x50,"weapon_knifegg",0xf);
                          local_118[0x5f] = '\0';
                          do {
                            cVar1 = *param_2;
                            cVar2 = param_2[(longlong)(local_118 + lVar3)];
                            if (cVar1 != cVar2) break;
                            param_2 = param_2 + 1;
                          } while (cVar2 != '\0');
                          if (cVar1 == cVar2) {
                            return 4;
                          }
                          return 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 4;
    }
  }
  return 1;
}



