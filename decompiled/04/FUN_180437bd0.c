// FUN_180437bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180437bd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180437bd0(undefined8 *param_1,undefined8 *param_2,float param_3,int *param_4,int *param_5,
                  longlong param_6)

{
  LPSTREAM pIVar1;
  longlong *plVar2;
  ULARGE_INTEGER UVar3;
  int iVar4;
  HRESULT HVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStackY_1c8 [32];
  longlong local_168;
  ulonglong local_160;
  int *local_150;
  int *local_148;
  LPSTREAM local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  ULONG local_120 [2];
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  STATSTG local_b8;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_1c8;
  local_148 = param_5;
  local_168 = param_6;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_150 = param_4;
  FUN_18015ba30(local_e8,*param_2,param_2[1]);
  puVar9 = local_e8;
  if (0xf < (ulonglong)local_d8._8_8_) {
    puVar9 = (undefined1 *)local_e8._0_8_;
  }
  pfVar6 = (float *)FUN_180427e70(puVar9);
  if (pfVar6 != (float *)0x0) {
    iVar10 = (int)(param_3 * *pfVar6);
    iVar11 = (int)(param_3 * pfVar6[1]);
    if (((0 < iVar10) && (0 < iVar11)) &&
       (puVar7 = (undefined8 *)_malloc_base(0x80), puVar7 != (undefined8 *)0x0)) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 1) = 0x3e800000;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3c23d70a;
      uVar12 = (longlong)iVar11 * (longlong)iVar10 * 4;
      local_118 = (undefined1  [16])0x0;
      local_108 = 0;
      if (uVar12 != 0) {
        if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar8 = FUN_18015bca0(uVar12);
        local_118._0_8_ = lVar8;
        local_108 = lVar8 + uVar12;
        FUN_18063ab10(lVar8,0,uVar12);
        local_118._8_8_ = lVar8 + uVar12;
      }
      FUN_18042b840(puVar7);
      lVar8 = puVar7[9];
      while (lVar8 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x408);
        thunk_FUN_180621380();
      }
      if (puVar7[2] != 0) {
        thunk_FUN_180621380();
      }
      if (puVar7[4] != 0) {
        thunk_FUN_180621380();
      }
      if (puVar7[6] != 0) {
        thunk_FUN_180621380();
      }
      if (puVar7[0xb] != 0) {
        thunk_FUN_180621380();
      }
      thunk_FUN_180621380(puVar7);
      FUN_1804281e0(pfVar6);
      if (local_150 != (int *)0x0) {
        *local_150 = iVar10;
      }
      if (local_148 != (int *)0x0) {
        *local_148 = iVar11;
      }
      if (local_168 == 0) {
        if ((DAT_180cd48f0 & 1) == 0) {
          DAT_180cd48f0 = DAT_180cd48f0 | 1;
          DAT_180cd48f8 = 0;
          CoCreateInstance((IID *)&DAT_1807c6830,(LPUNKNOWN)0x0,1,(IID *)&DAT_1807c67d8,
                           (LPVOID *)&DAT_180cd48f8);
          atexit(FUN_180663120);
        }
        if (DAT_180cd48f8 == 0) {
          *param_1 = 0;
          FUN_180113710(local_118);
        }
        else {
          local_138 = (longlong *)0x0;
          iVar4 = (**(code **)(*(longlong *)DAT_180cd48f8 + 0xa0))
                            (DAT_180cd48f8,iVar10,iVar11,&DAT_1807c6800);
          if (iVar4 < 0) {
            *param_1 = 0;
          }
          else {
            local_140 = (IStream *)0x0;
            HVar5 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_140);
            pIVar1 = local_140;
            if (HVar5 < 0) {
              *param_1 = 0;
              if (local_140 != (IStream *)0x0) {
                local_140 = (IStream *)0x0;
                (*pIVar1->lpVtbl->Release)();
              }
            }
            else {
              local_130 = (longlong *)0x0;
              iVar4 = (**(code **)(*(longlong *)DAT_180cd48f8 + 0x40))
                                (DAT_180cd48f8,&DAT_1807c6820,0,&local_130);
              plVar2 = local_130;
              if (iVar4 < 0) {
                *param_1 = 0;
                if (local_130 != (longlong *)0x0) {
                  local_130 = (longlong *)0x0;
                  (**(code **)(*plVar2 + 0x10))();
                }
                pIVar1 = local_140;
                if (local_140 != (IStream *)0x0) {
                  local_140 = (IStream *)0x0;
                  (*pIVar1->lpVtbl->Release)();
                }
              }
              else {
                iVar4 = (**(code **)(*local_130 + 0x18))(local_130,local_140,2);
                plVar2 = local_130;
                if (iVar4 < 0) {
                  *param_1 = 0;
                  if (local_130 != (longlong *)0x0) {
                    local_130 = (longlong *)0x0;
                    (**(code **)(*plVar2 + 0x10))();
                  }
                  pIVar1 = local_140;
                  if (local_140 != (IStream *)0x0) {
                    local_140 = (IStream *)0x0;
                    (*pIVar1->lpVtbl->Release)();
                  }
                }
                else {
                  local_128 = (longlong *)0x0;
                  iVar4 = (**(code **)(*local_130 + 0x50))(local_130,&local_128,0);
                  plVar2 = local_128;
                  if (iVar4 < 0) {
                    *param_1 = 0;
                    if (local_128 != (longlong *)0x0) {
                      local_128 = (longlong *)0x0;
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    plVar2 = local_130;
                    if (local_130 != (longlong *)0x0) {
                      local_130 = (longlong *)0x0;
                      (**(code **)(*plVar2 + 0x10))();
                    }
                    pIVar1 = local_140;
                    if (local_140 != (IStream *)0x0) {
                      local_140 = (IStream *)0x0;
                      (*pIVar1->lpVtbl->Release)();
                    }
                  }
                  else {
                    iVar4 = (**(code **)(*local_128 + 0x18))(local_128,0);
                    plVar2 = local_128;
                    if (iVar4 < 0) {
                      *param_1 = 0;
                      if (local_128 != (longlong *)0x0) {
                        local_128 = (longlong *)0x0;
                        (**(code **)(*plVar2 + 0x10))();
                      }
                      plVar2 = local_130;
                      if (local_130 != (longlong *)0x0) {
                        local_130 = (longlong *)0x0;
                        (**(code **)(*plVar2 + 0x10))();
                      }
                      pIVar1 = local_140;
                      if (local_140 != (IStream *)0x0) {
                        local_140 = (IStream *)0x0;
                        (*pIVar1->lpVtbl->Release)();
                      }
                    }
                    else {
                      iVar10 = (**(code **)(*local_128 + 0x20))(local_128,iVar10,iVar11);
                      plVar2 = local_128;
                      if (iVar10 < 0) {
                        *param_1 = 0;
                        if (local_128 != (longlong *)0x0) {
                          local_128 = (longlong *)0x0;
                          (**(code **)(*plVar2 + 0x10))();
                        }
                        plVar2 = local_130;
                        if (local_130 != (longlong *)0x0) {
                          local_130 = (longlong *)0x0;
                          (**(code **)(*plVar2 + 0x10))();
                        }
                        pIVar1 = local_140;
                        if (local_140 != (IStream *)0x0) {
                          local_140 = (IStream *)0x0;
                          (*pIVar1->lpVtbl->Release)();
                        }
                      }
                      else {
                        local_c8 = 0x43dd6a8df5c7ad2d;
                        uStack_c0 = 0xe91a263599a2a8a7;
                        iVar10 = (**(code **)(*local_128 + 0x30))(local_128,&local_c8);
                        plVar2 = local_128;
                        if (iVar10 < 0) {
                          *param_1 = 0;
                          if (local_128 != (longlong *)0x0) {
                            local_128 = (longlong *)0x0;
                            (**(code **)(*plVar2 + 0x10))();
                          }
                          plVar2 = local_130;
                          if (local_130 != (longlong *)0x0) {
                            local_130 = (longlong *)0x0;
                            (**(code **)(*plVar2 + 0x10))();
                          }
                          pIVar1 = local_140;
                          if (local_140 != (IStream *)0x0) {
                            local_140 = (IStream *)0x0;
                            (*pIVar1->lpVtbl->Release)();
                          }
                        }
                        else {
                          iVar10 = (**(code **)(*local_128 + 0x58))(local_128,local_138,0);
                          plVar2 = local_128;
                          if (iVar10 < 0) {
                            *param_1 = 0;
                            if (local_128 != (longlong *)0x0) {
                              local_128 = (longlong *)0x0;
                              (**(code **)(*plVar2 + 0x10))();
                            }
                            plVar2 = local_130;
                            if (local_130 != (longlong *)0x0) {
                              local_130 = (longlong *)0x0;
                              (**(code **)(*plVar2 + 0x10))();
                            }
                            pIVar1 = local_140;
                            if (local_140 != (IStream *)0x0) {
                              local_140 = (IStream *)0x0;
                              (*pIVar1->lpVtbl->Release)();
                            }
                          }
                          else {
                            iVar10 = (**(code **)(*local_128 + 0x60))();
                            if ((iVar10 < 0) ||
                               (iVar10 = (**(code **)(*local_130 + 0x58))(), iVar10 < 0)) {
                              plVar2 = local_128;
                              *param_1 = 0;
                              if (local_128 != (longlong *)0x0) {
                                local_128 = (longlong *)0x0;
                                (**(code **)(*plVar2 + 0x10))();
                              }
                              plVar2 = local_130;
                              if (local_130 != (longlong *)0x0) {
                                local_130 = (longlong *)0x0;
                                (**(code **)(*plVar2 + 0x10))();
                              }
                              pIVar1 = local_140;
                              if (local_140 != (IStream *)0x0) {
                                local_140 = (IStream *)0x0;
                                (*pIVar1->lpVtbl->Release)();
                              }
                            }
                            else {
                              local_b8.pwcsName = (LPOLESTR)0x0;
                              local_b8.type = 0;
                              local_b8._12_4_ = 0;
                              local_b8.cbSize.QuadPart = 0;
                              local_b8.mtime.dwLowDateTime = 0;
                              local_b8.mtime.dwHighDateTime = 0;
                              local_b8.ctime.dwLowDateTime = 0;
                              local_b8.ctime.dwHighDateTime = 0;
                              local_b8.atime.dwLowDateTime = 0;
                              local_b8.atime.dwHighDateTime = 0;
                              local_b8.grfMode = 0;
                              local_b8.grfLocksSupported = 0;
                              local_b8.clsid.Data1 = 0;
                              local_b8.clsid.Data2 = 0;
                              local_b8.clsid.Data3 = 0;
                              local_b8.clsid.Data4[0] = '\0';
                              local_b8.clsid.Data4[1] = '\0';
                              local_b8.clsid.Data4[2] = '\0';
                              local_b8.clsid.Data4[3] = '\0';
                              local_b8.clsid.Data4[4] = '\0';
                              local_b8.clsid.Data4[5] = '\0';
                              local_b8.clsid.Data4[6] = '\0';
                              local_b8.clsid.Data4[7] = '\0';
                              local_b8.grfStateBits = 0;
                              local_b8.reserved = 0;
                              HVar5 = (*local_140->lpVtbl->Stat)(local_140,&local_b8,1);
                              UVar3.s = local_b8.cbSize.s;
                              plVar2 = local_128;
                              if (HVar5 < 0) {
                                *param_1 = 0;
                                if (local_128 != (longlong *)0x0) {
                                  local_128 = (longlong *)0x0;
                                  (**(code **)(*plVar2 + 0x10))();
                                }
                                plVar2 = local_130;
                                if (local_130 != (longlong *)0x0) {
                                  local_130 = (longlong *)0x0;
                                  (**(code **)(*plVar2 + 0x10))();
                                }
                                pIVar1 = local_140;
                                if (local_140 != (IStream *)0x0) {
                                  local_140 = (IStream *)0x0;
                                  (*pIVar1->lpVtbl->Release)();
                                }
                              }
                              else {
                                local_100 = (undefined1  [16])0x0;
                                local_f0 = 0;
                                if (local_b8.cbSize.QuadPart != 0) {
                                  if (0x7fffffffffffffff < local_b8.cbSize.QuadPart) {
                    /* WARNING: Subroutine does not return */
                                    FUN_1801136f0();
                                  }
                                  lVar8 = FUN_18015bca0(local_b8.cbSize.QuadPart);
                                  local_100._0_8_ = lVar8;
                                  local_f0 = lVar8 + UVar3.QuadPart;
                                  FUN_18063ab10(lVar8,0,UVar3.QuadPart);
                                  local_100._8_8_ = lVar8 + UVar3.QuadPart;
                                }
                                (*local_140->lpVtbl->Seek)
                                          (local_140,(LARGE_INTEGER)0x0,0,(ULARGE_INTEGER *)0x0);
                                local_120[0] = 0;
                                HVar5 = (*local_140->lpVtbl->Read)
                                                  (local_140,(void *)local_100._0_8_,UVar3.s.LowPart
                                                   ,local_120);
                                if (-1 < HVar5) {
                                  local_168 = local_100._0_8_;
                                  local_160 = (ulonglong)local_120[0];
                                  FUN_180437520(param_1,&local_168,0,0);
                                  FUN_180113710(local_100);
                                  plVar2 = local_128;
                                  if (local_128 != (longlong *)0x0) {
                                    local_128 = (longlong *)0x0;
                                    (**(code **)(*plVar2 + 0x10))();
                                  }
                                  plVar2 = local_130;
                                  if (local_130 != (longlong *)0x0) {
                                    local_130 = (longlong *)0x0;
                                    (**(code **)(*plVar2 + 0x10))();
                                  }
                                  pIVar1 = local_140;
                                  if (local_140 != (IStream *)0x0) {
                                    local_140 = (IStream *)0x0;
                                    (*pIVar1->lpVtbl->Release)();
                                  }
                                  plVar2 = local_138;
                                  if (local_138 != (longlong *)0x0) {
                                    local_138 = (longlong *)0x0;
                                    (**(code **)(*plVar2 + 0x10))();
                                  }
                                  FUN_180113710(local_118);
                                  goto LAB_18043851a;
                                }
                                *param_1 = 0;
                                FUN_180113710(local_100);
                                plVar2 = local_128;
                                if (local_128 != (longlong *)0x0) {
                                  local_128 = (longlong *)0x0;
                                  (**(code **)(*plVar2 + 0x10))();
                                }
                                plVar2 = local_130;
                                if (local_130 != (longlong *)0x0) {
                                  local_130 = (longlong *)0x0;
                                  (**(code **)(*plVar2 + 0x10))();
                                }
                                pIVar1 = local_140;
                                if (local_140 != (IStream *)0x0) {
                                  local_140 = (IStream *)0x0;
                                  (*pIVar1->lpVtbl->Release)();
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
          plVar2 = local_138;
          if (local_138 != (longlong *)0x0) {
            local_138 = (longlong *)0x0;
            (**(code **)(*plVar2 + 0x10))();
          }
          FUN_180113710(local_118);
        }
      }
      else {
        FUN_180438d50(local_168,local_118);
        FUN_180437380(param_1,local_118._0_8_,iVar10,iVar11);
        FUN_180113710(local_118);
      }
      goto LAB_18043851a;
    }
    FUN_1804281e0(pfVar6);
  }
  *param_1 = 0;
LAB_18043851a:
  FUN_18015c010(local_e8);
}



