// FUN_180515fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180515fb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180515fb0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  FUN_18015ba30(local_38,*param_1,param_1[1]);
  pbVar4 = local_38;
  if (0xf < (ulonglong)local_28._8_8_) {
    pbVar4 = (byte *)local_38._0_8_;
  }
  pbVar5 = pbVar4 + local_28._0_8_;
  if (pbVar4 != pbVar5) {
    do {
      iVar1 = tolower((uint)*pbVar4);
      *pbVar4 = (byte)iVar1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != pbVar5);
  }
  local_48 = 6;
  pbVar4 = local_38;
  if (0xf < (ulonglong)local_28._8_8_) {
    pbVar4 = (byte *)local_38._0_8_;
  }
  lVar2 = FUN_180159df0(pbVar4,local_28._0_8_,0,"damage");
  if (lVar2 == -1) {
    puVar3 = local_38;
    if (0xf < (ulonglong)local_28._8_8_) {
      puVar3 = (undefined1 *)local_38._0_8_;
    }
    local_48 = 6;
    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"chance");
    if (lVar2 == -1) {
      puVar3 = local_38;
      if (0xf < (ulonglong)local_28._8_8_) {
        puVar3 = (undefined1 *)local_38._0_8_;
      }
      local_48 = 8;
      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"accuracy");
      if (lVar2 == -1) {
        puVar3 = local_38;
        if (0xf < (ulonglong)local_28._8_8_) {
          puVar3 = (undefined1 *)local_38._0_8_;
        }
        local_48 = 5;
        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"sound");
        if (lVar2 == -1) {
          puVar3 = local_38;
          if (0xf < (ulonglong)local_28._8_8_) {
            puVar3 = (undefined1 *)local_38._0_8_;
          }
          local_48 = 5;
          lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"color");
          if (lVar2 == -1) {
            puVar3 = local_38;
            if (0xf < (ulonglong)local_28._8_8_) {
              puVar3 = (undefined1 *)local_38._0_8_;
            }
            local_48 = 4;
            lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,&DAT_1806bd1f0);
            if (lVar2 == -1) {
              puVar3 = local_38;
              if (0xf < (ulonglong)local_28._8_8_) {
                puVar3 = (undefined1 *)local_38._0_8_;
              }
              local_48 = 5;
              lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"smoke");
              if (lVar2 == -1) {
                puVar3 = local_38;
                if (0xf < (ulonglong)local_28._8_8_) {
                  puVar3 = (undefined1 *)local_38._0_8_;
                }
                local_48 = 5;
                lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"flash");
                if (lVar2 == -1) {
                  puVar3 = local_38;
                  if (0xf < (ulonglong)local_28._8_8_) {
                    puVar3 = (undefined1 *)local_38._0_8_;
                  }
                  local_48 = 8;
                  lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"airborne");
                  if (lVar2 == -1) {
                    puVar3 = local_38;
                    if (0xf < (ulonglong)local_28._8_8_) {
                      puVar3 = (undefined1 *)local_38._0_8_;
                    }
                    local_48 = 4;
                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,&DAT_180866e84);
                    if (lVar2 == -1) {
                      puVar3 = local_38;
                      if (0xf < (ulonglong)local_28._8_8_) {
                        puVar3 = (undefined1 *)local_38._0_8_;
                      }
                      local_48 = 4;
                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,&DAT_180866e7c);
                      if (lVar2 == -1) {
                        puVar3 = local_38;
                        if (0xf < (ulonglong)local_28._8_8_) {
                          puVar3 = (undefined1 *)local_38._0_8_;
                        }
                        local_48 = 5;
                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"delay");
                        if (lVar2 == -1) {
                          puVar3 = local_38;
                          if (0xf < (ulonglong)local_28._8_8_) {
                            puVar3 = (undefined1 *)local_38._0_8_;
                          }
                          local_48 = 8;
                          lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"interval");
                          if (lVar2 == -1) {
                            puVar3 = local_38;
                            if (0xf < (ulonglong)local_28._8_8_) {
                              puVar3 = (undefined1 *)local_38._0_8_;
                            }
                            local_48 = 5;
                            lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"ticks");
                            if (lVar2 == -1) {
                              puVar3 = local_38;
                              if (0xf < (ulonglong)local_28._8_8_) {
                                puVar3 = (undefined1 *)local_38._0_8_;
                              }
                              local_48 = 7;
                              lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"history");
                              if (lVar2 == -1) {
                                puVar3 = local_38;
                                if (0xf < (ulonglong)local_28._8_8_) {
                                  puVar3 = (undefined1 *)local_38._0_8_;
                                }
                                local_48 = 5;
                                lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"speed");
                                if (lVar2 == -1) {
                                  puVar3 = local_38;
                                  if (0xf < (ulonglong)local_28._8_8_) {
                                    puVar3 = (undefined1 *)local_38._0_8_;
                                  }
                                  local_48 = 0xc;
                                  lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"acceleration");
                                  if (lVar2 == -1) {
                                    puVar3 = local_38;
                                    if (0xf < (ulonglong)local_28._8_8_) {
                                      puVar3 = (undefined1 *)local_38._0_8_;
                                    }
                                    local_48 = 6;
                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"motion");
                                    if (lVar2 == -1) {
                                      puVar3 = local_38;
                                      if (0xf < (ulonglong)local_28._8_8_) {
                                        puVar3 = (undefined1 *)local_38._0_8_;
                                      }
                                      local_48 = 5;
                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"pitch");
                                      if (lVar2 == -1) {
                                        puVar3 = local_38;
                                        if (0xf < (ulonglong)local_28._8_8_) {
                                          puVar3 = (undefined1 *)local_38._0_8_;
                                        }
                                        local_48 = 6;
                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"recoil");
                                        if (lVar2 == -1) {
                                          puVar3 = local_38;
                                          if (0xf < (ulonglong)local_28._8_8_) {
                                            puVar3 = (undefined1 *)local_38._0_8_;
                                          }
                                          local_48 = 3;
                                          lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                &DAT_1807c5d68);
                                          if (lVar2 == -1) {
                                            puVar3 = local_38;
                                            if (0xf < (ulonglong)local_28._8_8_) {
                                              puVar3 = (undefined1 *)local_38._0_8_;
                                            }
                                            local_48 = 5;
                                            lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"angle");
                                            if (lVar2 == -1) {
                                              puVar3 = local_38;
                                              if (0xf < (ulonglong)local_28._8_8_) {
                                                puVar3 = (undefined1 *)local_38._0_8_;
                                              }
                                              local_48 = 6;
                                              lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,"offset"
                                                                   );
                                              if (lVar2 == -1) {
                                                puVar3 = local_38;
                                                if (0xf < (ulonglong)local_28._8_8_) {
                                                  puVar3 = (undefined1 *)local_38._0_8_;
                                                }
                                                local_48 = 6;
                                                lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                      "adjust");
                                                if (lVar2 == -1) {
                                                  puVar3 = local_38;
                                                  if (0xf < (ulonglong)local_28._8_8_) {
                                                    puVar3 = (undefined1 *)local_38._0_8_;
                                                  }
                                                  local_48 = 6;
                                                  lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                        "jitter");
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 4;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          &DAT_1808648ac);
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 3;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            &DAT_1806bc4cc);
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 0xd;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,"field of view");
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 5;
                                                          lVar2 = FUN_180159df0(puVar3,local_28.
                                                  _0_8_,0,"scale");
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 6;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          "spread");
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 3;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            &DAT_1808605a4);
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 6;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,"preset");
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 5;
                                                          lVar2 = FUN_180159df0(puVar3,local_28.
                                                  _0_8_,0,"walls");
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 5;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          "block");
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 4;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            &DAT_18081e908);
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 9;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,"condition");
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 6;
                                                          lVar2 = FUN_180159df0(puVar3,local_28.
                                                  _0_8_,0,"target");
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 6;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          "hitbox");
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 5;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            "scope");
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 3;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,&DAT_1806bcd70);
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 4;
                                                          lVar2 = FUN_180159df0(puVar3,local_28.
                                                  _0_8_,0,&DAT_1806bdfac);
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 9;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          "smoothing");
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 5;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            "curve");
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 6;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,"bullet");
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 4;
                                                          lVar2 = FUN_180159df0(puVar3,local_28.
                                                  _0_8_,0,&DAT_180866f68);
                                                  if (lVar2 == -1) {
                                                    puVar3 = local_38;
                                                    if (0xf < (ulonglong)local_28._8_8_) {
                                                      puVar3 = (undefined1 *)local_38._0_8_;
                                                    }
                                                    local_48 = 4;
                                                    lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                          &DAT_180866f60);
                                                    if (lVar2 == -1) {
                                                      puVar3 = local_38;
                                                      if (0xf < (ulonglong)local_28._8_8_) {
                                                        puVar3 = (undefined1 *)local_38._0_8_;
                                                      }
                                                      local_48 = 4;
                                                      lVar2 = FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                            &DAT_18081ea18);
                                                      if (lVar2 == -1) {
                                                        puVar3 = local_38;
                                                        if (0xf < (ulonglong)local_28._8_8_) {
                                                          puVar3 = (undefined1 *)local_38._0_8_;
                                                        }
                                                        local_48 = 5;
                                                        lVar2 = FUN_180159df0(puVar3,local_28._0_8_,
                                                                              0,"right");
                                                        if (lVar2 == -1) {
                                                          puVar3 = local_38;
                                                          if (0xf < (ulonglong)local_28._8_8_) {
                                                            puVar3 = (undefined1 *)local_38._0_8_;
                                                          }
                                                          local_48 = 9;
                                                          FUN_180159df0(puVar3,local_28._0_8_,0,
                                                                        "direction");
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
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_18015c010(local_38);
}



