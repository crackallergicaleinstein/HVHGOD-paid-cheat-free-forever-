// FUN_180201fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180201fd0 */

ulonglong FUN_180201fd0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 uVar10;
  ulonglong uVar11;
  undefined2 local_48 [4];
  undefined *local_40;
  
  plVar8 = (longlong *)
           ((((param_4 >> 0x10 & 0xff ^
              ((param_4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_4 >> 8 & 0xff) *
              0x100000001b3) * 0x100000001b3 ^ (param_4 & 0xffffffff) >> 0x18) * 0x100000001b3 &
            DAT_180cca960) * 0x10 + DAT_180cca948);
  lVar7 = plVar8[1];
  if (lVar7 == DAT_180cca938) {
LAB_180202079:
    lVar7 = 0;
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x10);
    while ((int)param_4 != iVar4) {
      if (lVar7 == *plVar8) goto LAB_180202079;
      lVar7 = *(longlong *)(lVar7 + 8);
      iVar4 = *(int *)(lVar7 + 0x10);
    }
  }
  lVar9 = DAT_180cca938;
  if (lVar7 != 0) {
    lVar9 = lVar7;
  }
  if (lVar9 == DAT_180cca938) {
    uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  else {
    uVar5 = FUN_1802239e0(param_3);
    if ((char)uVar5 != '\0') {
      uVar11 = 0xffffffffffffffff;
      iVar4 = DAT_180c63720;
      if (DAT_180c63720 == 0) {
        UVar6 = GetTickCount64();
        if (UVar6 < DAT_180c63718) {
          iVar4 = 0;
        }
        else {
          local_40 = &DAT_1808e9060;
          iVar4 = FUN_1805f68d0(&DAT_1808e9060);
          if (iVar4 != 0) goto LAB_180202e97;
          if (DAT_1808e90ac == 0x7fffffff) {
            DAT_1808e90ac = 0x7ffffffe;
            goto LAB_180202eac;
          }
          if ((DAT_180c63720 == 0) && (DAT_180c63718 <= UVar6)) {
            DAT_180c63720 = FUN_1804174b0("C_EconItemView",0x34b55816);
            if (DAT_180c63720 == 0) {
              DAT_180c63718 = UVar6 + 1000;
            }
            else {
              DAT_180c63718 = 0xffffffffffffffff;
            }
          }
          iVar4 = DAT_180c63720;
          FUN_1805f68fc(&DAT_1808e9060);
        }
      }
      uVar5 = FUN_1801fddf0(iVar4 + param_3,lVar9 + 0x20);
      if ((char)uVar5 != '\0') {
        iVar4 = DAT_180c6370c;
        if (DAT_180c6370c == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c63710) {
            iVar4 = 0;
          }
          else {
            local_40 = &DAT_1808e9010;
            iVar4 = FUN_1805f68d0(&DAT_1808e9010);
            if (iVar4 != 0) goto LAB_180202e97;
            if (DAT_1808e905c == 0x7fffffff) {
              DAT_1808e905c = 0x7ffffffe;
              goto LAB_180202eac;
            }
            if ((DAT_180c6370c == 0) && (DAT_180c63710 <= UVar6)) {
              DAT_180c6370c = FUN_1804174b0("C_EconItemView",0x216db5e3);
              if (DAT_180c6370c == 0) {
                DAT_180c63710 = UVar6 + 1000;
              }
              else {
                DAT_180c63710 = 0xffffffffffffffff;
              }
            }
            iVar4 = DAT_180c6370c;
            FUN_1805f68fc(&DAT_1808e9010);
          }
        }
        uVar5 = FUN_1804513c0(iVar4 + param_3,1,1);
        if ((char)uVar5 != '\0') {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          cVar2 = FUN_1801ad7b0(iVar4 + param_3,lVar9 + 0x28);
          uVar5 = FUN_18017ea70();
          if (*(int *)(uVar5 + 4) != 0) {
            *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
          }
          if (cVar2 != '\0') {
            iVar4 = DAT_180c63708;
            if (DAT_180c63708 == 0) {
              UVar6 = GetTickCount64();
              if (UVar6 < DAT_180c63700) {
                iVar4 = 0;
              }
              else {
                local_40 = &DAT_1808e8fc0;
                iVar4 = FUN_1805f68d0(&DAT_1808e8fc0);
                if (iVar4 != 0) goto LAB_180202e97;
                if (DAT_1808e900c == 0x7fffffff) {
                  DAT_1808e900c = 0x7ffffffe;
                  goto LAB_180202eac;
                }
                if ((DAT_180c63708 == 0) && (DAT_180c63700 <= UVar6)) {
                  DAT_180c63708 = FUN_1804174b0("C_EconItemView",0x373ee446);
                  if (DAT_180c63708 == 0) {
                    DAT_180c63700 = UVar6 + 1000;
                  }
                  else {
                    DAT_180c63700 = 0xffffffffffffffff;
                  }
                }
                iVar4 = DAT_180c63708;
                FUN_1805f68fc(&DAT_1808e8fc0);
              }
            }
            uVar5 = FUN_1804513c0(iVar4 + param_3,4,1);
            if ((char)uVar5 != '\0') {
              lVar7 = FUN_18017ea70();
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
              cVar2 = FUN_1801ad800(iVar4 + param_3,lVar9 + 0x18);
              uVar5 = FUN_18017ea70();
              if (*(int *)(uVar5 + 4) != 0) {
                *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
              }
              if (cVar2 != '\0') {
                iVar4 = DAT_180c636f4;
                if (DAT_180c636f4 == 0) {
                  UVar6 = GetTickCount64();
                  if (UVar6 < DAT_180c636f8) {
                    iVar4 = 0;
                  }
                  else {
                    local_40 = &DAT_1808e8f70;
                    iVar4 = FUN_1805f68d0(&DAT_1808e8f70);
                    if (iVar4 != 0) goto LAB_180202e97;
                    if (DAT_1808e8fbc == 0x7fffffff) {
                      DAT_1808e8fbc = 0x7ffffffe;
                      goto LAB_180202eac;
                    }
                    if ((DAT_180c636f4 == 0) && (DAT_180c636f8 <= UVar6)) {
                      DAT_180c636f4 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
                      if (DAT_180c636f4 == 0) {
                        DAT_180c636f8 = UVar6 + 1000;
                      }
                      else {
                        DAT_180c636f8 = 0xffffffffffffffff;
                      }
                    }
                    iVar4 = DAT_180c636f4;
                    FUN_1805f68fc(&DAT_1808e8f70);
                  }
                }
                uVar5 = FUN_1804513c0(iVar4 + param_3,4,1);
                if ((char)uVar5 != '\0') {
                  lVar7 = FUN_18017ea70();
                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                  cVar2 = FUN_1801ad800(iVar4 + param_3,lVar9 + 0x2c);
                  uVar5 = FUN_18017ea70();
                  if (*(int *)(uVar5 + 4) != 0) {
                    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                  }
                  if (cVar2 != '\0') {
                    iVar4 = DAT_180c636f0;
                    if (DAT_180c636f0 == 0) {
                      UVar6 = GetTickCount64();
                      if (UVar6 < DAT_180c636e8) {
                        iVar4 = 0;
                      }
                      else {
                        local_40 = &DAT_1808e8f20;
                        iVar4 = FUN_1805f68d0(&DAT_1808e8f20);
                        if (iVar4 != 0) goto LAB_180202e97;
                        if (DAT_1808e8f6c == 0x7fffffff) {
                          DAT_1808e8f6c = 0x7ffffffe;
                          goto LAB_180202eac;
                        }
                        if ((DAT_180c636f0 == 0) && (DAT_180c636e8 <= UVar6)) {
                          DAT_180c636f0 = FUN_1804174b0("C_EconItemView",0xc65de986);
                          if (DAT_180c636f0 == 0) {
                            DAT_180c636e8 = UVar6 + 1000;
                          }
                          else {
                            DAT_180c636e8 = 0xffffffffffffffff;
                          }
                        }
                        iVar4 = DAT_180c636f0;
                        FUN_1805f68fc(&DAT_1808e8f20);
                      }
                    }
                    uVar5 = FUN_1804513c0(iVar4 + param_3,4,1);
                    if ((char)uVar5 != '\0') {
                      lVar7 = FUN_18017ea70();
                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                      cVar2 = FUN_1801ad800(iVar4 + param_3,lVar9 + 0x30);
                      uVar5 = FUN_18017ea70();
                      if (*(int *)(uVar5 + 4) != 0) {
                        *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                      }
                      if (cVar2 != '\0') {
                        iVar4 = DAT_180c636dc;
                        if (DAT_180c636dc == 0) {
                          UVar6 = GetTickCount64();
                          if (UVar6 < DAT_180c636e0) {
                            iVar4 = 0;
                          }
                          else {
                            local_40 = &DAT_1808e8ed0;
                            iVar4 = FUN_1805f68d0(&DAT_1808e8ed0);
                            if (iVar4 != 0) goto LAB_180202e97;
                            if (DAT_1808e8f1c == 0x7fffffff) {
                              DAT_1808e8f1c = 0x7ffffffe;
                              goto LAB_180202eac;
                            }
                            if ((DAT_180c636dc == 0) && (DAT_180c636e0 <= UVar6)) {
                              DAT_180c636dc = FUN_1804174b0("C_EconItemView",0x710abdd);
                              if (DAT_180c636dc == 0) {
                                DAT_180c636e0 = UVar6 + 1000;
                              }
                              else {
                                DAT_180c636e0 = 0xffffffffffffffff;
                              }
                            }
                            iVar4 = DAT_180c636dc;
                            FUN_1805f68fc(&DAT_1808e8ed0);
                          }
                        }
                        uVar5 = FUN_1804513c0(iVar4 + param_3,1,1);
                        if ((char)uVar5 != '\0') {
                          lVar7 = FUN_18017ea70();
                          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                          cVar2 = FUN_1801ad7b0(iVar4 + param_3,lVar9 + 0x34);
                          uVar5 = FUN_18017ea70();
                          if (*(int *)(uVar5 + 4) != 0) {
                            *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                          }
                          if (cVar2 != '\0') {
                            iVar4 = DAT_180c636d8;
                            if (DAT_180c636d8 == 0) {
                              UVar6 = GetTickCount64();
                              if (UVar6 < DAT_180c636d0) {
                                iVar4 = 0;
                              }
                              else {
                                local_40 = &DAT_1808e8e80;
                                iVar4 = FUN_1805f68d0(&DAT_1808e8e80);
                                if (iVar4 != 0) goto LAB_180202e97;
                                if (DAT_1808e8ecc == 0x7fffffff) {
                                  DAT_1808e8ecc = 0x7ffffffe;
                                  goto LAB_180202eac;
                                }
                                if ((DAT_180c636d8 == 0) && (DAT_180c636d0 <= UVar6)) {
                                  DAT_180c636d8 = FUN_1804174b0("C_EconEntity",0xa12d48f);
                                  if (DAT_180c636d8 == 0) {
                                    DAT_180c636d0 = UVar6 + 1000;
                                  }
                                  else {
                                    DAT_180c636d0 = 0xffffffffffffffff;
                                  }
                                }
                                iVar4 = DAT_180c636d8;
                                FUN_1805f68fc(&DAT_1808e8e80);
                              }
                            }
                            uVar5 = FUN_1804513c0(iVar4 + param_2,4,1);
                            if ((char)uVar5 != '\0') {
                              lVar7 = FUN_18017ea70();
                              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                              cVar2 = FUN_1801ad800(iVar4 + param_2,(undefined4 *)(lVar9 + 0x38));
                              uVar5 = FUN_18017ea70();
                              if (*(int *)(uVar5 + 4) != 0) {
                                *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                              }
                              iVar4 = DAT_180c636c4;
                              if (cVar2 != '\0') {
                                if ((DAT_180c636c4 == 0) &&
                                   (UVar6 = GetTickCount64(), DAT_180c636c8 <= UVar6)) {
                                  local_40 = &DAT_1808e8e30;
                                  iVar4 = FUN_1805f68d0(&DAT_1808e8e30);
                                  if (iVar4 != 0) goto LAB_180202e97;
                                  if (DAT_1808e8e7c == 0x7fffffff) {
                                    DAT_1808e8e7c = 0x7ffffffe;
                                    goto LAB_180202eac;
                                  }
                                  if ((DAT_180c636c4 == 0) && (DAT_180c636c8 <= UVar6)) {
                                    DAT_180c636c4 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
                                    if (DAT_180c636c4 == 0) {
                                      DAT_180c636c8 = UVar6 + 1000;
                                    }
                                    else {
                                      DAT_180c636c8 = 0xffffffffffffffff;
                                    }
                                  }
                                  iVar4 = DAT_180c636c4;
                                  FUN_1805f68fc(&DAT_1808e8e30);
                                }
                                uVar5 = FUN_1804513c0(iVar4 + param_2,4,1);
                                if ((char)uVar5 != '\0') {
                                  lVar7 = FUN_18017ea70();
                                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                  cVar2 = FUN_1801ad800(iVar4 + param_2,lVar9 + 0x3c);
                                  uVar5 = FUN_18017ea70();
                                  if (*(int *)(uVar5 + 4) != 0) {
                                    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                                  }
                                  iVar4 = DAT_180c636c0;
                                  if (cVar2 != '\0') {
                                    if ((DAT_180c636c0 == 0) &&
                                       (UVar6 = GetTickCount64(), DAT_180c636b8 <= UVar6)) {
                                      local_40 = &DAT_1808e8de0;
                                      iVar4 = FUN_1805f68d0(&DAT_1808e8de0);
                                      if (iVar4 != 0) goto LAB_180202e97;
                                      if (DAT_1808e8e2c == 0x7fffffff) {
                                        DAT_1808e8e2c = 0x7ffffffe;
                                        goto LAB_180202eac;
                                      }
                                      if ((DAT_180c636c0 == 0) && (DAT_180c636b8 <= UVar6)) {
                                        DAT_180c636c0 = FUN_1804174b0("C_EconEntity",0x86253266);
                                        if (DAT_180c636c0 == 0) {
                                          DAT_180c636b8 = UVar6 + 1000;
                                        }
                                        else {
                                          DAT_180c636b8 = 0xffffffffffffffff;
                                        }
                                      }
                                      iVar4 = DAT_180c636c0;
                                      FUN_1805f68fc(&DAT_1808e8de0);
                                    }
                                    uVar5 = FUN_1804513c0(iVar4 + param_2,4,1);
                                    if ((char)uVar5 != '\0') {
                                      lVar7 = FUN_18017ea70();
                                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                      cVar2 = FUN_1801ad800(iVar4 + param_2,lVar9 + 0x40);
                                      uVar5 = FUN_18017ea70();
                                      if (*(int *)(uVar5 + 4) != 0) {
                                        *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                                      }
                                      iVar4 = DAT_180c636ac;
                                      if (cVar2 != '\0') {
                                        if ((DAT_180c636ac == 0) &&
                                           (UVar6 = GetTickCount64(), DAT_180c636b0 <= UVar6)) {
                                          local_40 = &DAT_1808e8d90;
                                          iVar4 = FUN_1805f68d0(&DAT_1808e8d90);
                                          if (iVar4 != 0) goto LAB_180202e97;
                                          if (DAT_1808e8ddc == 0x7fffffff) {
                                            DAT_1808e8ddc = 0x7ffffffe;
                                            goto LAB_180202eac;
                                          }
                                          if ((DAT_180c636ac == 0) && (DAT_180c636b0 <= UVar6)) {
                                            DAT_180c636ac = FUN_1804174b0("C_EconEntity",0x67ecc1e7)
                                            ;
                                            if (DAT_180c636ac == 0) {
                                              DAT_180c636b0 = UVar6 + 1000;
                                            }
                                            else {
                                              DAT_180c636b0 = 0xffffffffffffffff;
                                            }
                                          }
                                          iVar4 = DAT_180c636ac;
                                          FUN_1805f68fc(&DAT_1808e8d90);
                                        }
                                        uVar5 = FUN_1804513c0(iVar4 + param_2,4,1);
                                        if ((char)uVar5 != '\0') {
                                          lVar7 = FUN_18017ea70();
                                          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                          cVar2 = FUN_1801ad800(iVar4 + param_2,lVar9 + 0x44);
                                          uVar5 = FUN_18017ea70();
                                          if (*(int *)(uVar5 + 4) != 0) {
                                            *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                                          }
                                          iVar4 = DAT_180c636a8;
                                          if (cVar2 != '\0') {
                                            if ((DAT_180c636a8 == 0) &&
                                               (UVar6 = GetTickCount64(), DAT_180c636a0 <= UVar6)) {
                                              local_40 = &DAT_1808e8d40;
                                              iVar4 = FUN_1805f68d0(&DAT_1808e8d40);
                                              if (iVar4 != 0) goto LAB_180202e97;
                                              if (DAT_1808e8d8c == 0x7fffffff) {
                                                DAT_1808e8d8c = 0x7ffffffe;
                                                goto LAB_180202eac;
                                              }
                                              if ((DAT_180c636a8 == 0) && (DAT_180c636a0 <= UVar6))
                                              {
                                                DAT_180c636a8 =
                                                     FUN_1804174b0("C_EconItemView",0xafd12ee8);
                                                if (DAT_180c636a8 == 0) {
                                                  DAT_180c636a0 = UVar6 + 1000;
                                                }
                                                else {
                                                  DAT_180c636a0 = 0xffffffffffffffff;
                                                }
                                              }
                                              iVar4 = DAT_180c636a8;
                                              FUN_1805f68fc(&DAT_1808e8d40);
                                            }
                                            uVar5 = FUN_180204bc0(iVar4 + param_3,lVar9 + 0x48);
                                            iVar4 = DAT_180c63694;
                                            if ((char)uVar5 != '\0') {
                                              if ((DAT_180c63694 == 0) &&
                                                 (UVar6 = GetTickCount64(), DAT_180c63698 <= UVar6))
                                              {
                                                local_40 = &DAT_1808e8cf0;
                                                iVar4 = FUN_1805f68d0(&DAT_1808e8cf0);
                                                if (iVar4 != 0) goto LAB_180202e97;
                                                if (DAT_1808e8d3c == 0x7fffffff) {
                                                  DAT_1808e8d3c = 0x7ffffffe;
                                                  goto LAB_180202eac;
                                                }
                                                if ((DAT_180c63694 == 0) && (DAT_180c63698 <= UVar6)
                                                   ) {
                                                  DAT_180c63694 =
                                                       FUN_1804174b0("C_EconItemView",0xa74a6ed8);
                                                  if (DAT_180c63694 == 0) {
                                                    DAT_180c63698 = UVar6 + 1000;
                                                  }
                                                  else {
                                                    DAT_180c63698 = 0xffffffffffffffff;
                                                  }
                                                }
                                                iVar4 = DAT_180c63694;
                                                FUN_1805f68fc(&DAT_1808e8cf0);
                                              }
                                              uVar5 = FUN_180204bc0(iVar4 + param_3,lVar9 + 0xe9);
                                              iVar4 = DAT_180c63690;
                                              if ((char)uVar5 != '\0') {
                                                if ((DAT_180c63690 == 0) &&
                                                   (UVar6 = GetTickCount64(), DAT_180c63688 <= UVar6
                                                   )) {
                                                  local_40 = &DAT_1808e8ca0;
                                                  iVar4 = FUN_1805f68d0(&DAT_1808e8ca0);
                                                  if (iVar4 != 0) goto LAB_180202e97;
                                                  if (DAT_1808e8cec == 0x7fffffff) {
                                                    DAT_1808e8cec = 0x7ffffffe;
                                                    goto LAB_180202eac;
                                                  }
                                                  if ((DAT_180c63690 == 0) &&
                                                     (DAT_180c63688 <= UVar6)) {
                                                    DAT_180c63690 =
                                                         FUN_1804174b0("C_EconItemView",0x6a67d4c4);
                                                    if (DAT_180c63690 == 0) {
                                                      DAT_180c63688 = UVar6 + 1000;
                                                    }
                                                    else {
                                                      DAT_180c63688 = 0xffffffffffffffff;
                                                    }
                                                  }
                                                  iVar4 = DAT_180c63690;
                                                  FUN_1805f68fc(&DAT_1808e8ca0);
                                                }
                                                uVar5 = FUN_1804513c0(iVar4 + param_3,4,1);
                                                if ((char)uVar5 != '\0') {
                                                  lVar7 = FUN_18017ea70();
                                                  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                                  cVar2 = FUN_1801ad800(iVar4 + param_3,
                                                                        lVar9 + 0x18c);
                                                  uVar5 = FUN_18017ea70();
                                                  if (*(int *)(uVar5 + 4) != 0) {
                                                    *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + -1;
                                                  }
                                                  if (cVar2 != '\0') {
                                                    iVar4 = DAT_180c63678;
                                                    if (DAT_180c63678 == 0) {
                                                      UVar6 = GetTickCount64();
                                                      if (UVar6 < DAT_180c63680) {
                                                        iVar4 = 0;
                                                      }
                                                      else {
                                                        local_40 = &DAT_1808e8c50;
                                                        iVar4 = FUN_1805f68d0(&DAT_1808e8c50);
                                                        if (iVar4 != 0) {
LAB_180202e97:
                    /* WARNING: Subroutine does not return */
                                                          FUN_1805f6d44(5);
                                                        }
                                                        if (DAT_1808e8c9c == 0x7fffffff) {
                                                          DAT_1808e8c9c = 0x7ffffffe;
LAB_180202eac:
                    /* WARNING: Subroutine does not return */
                                                          FUN_1805f6d44(6);
                                                        }
                                                        if ((DAT_180c63678 == 0) &&
                                                           (DAT_180c63680 <= UVar6)) {
                                                          DAT_180c63678 =
                                                               FUN_1804174b0("C_EconItemView",
                                                                             0xa2ccb41a);
                                                          if (DAT_180c63678 == 0) {
                                                            uVar11 = UVar6 + 1000;
                                                          }
                                                          DAT_180c63680 = uVar11;
                                                        }
                                                        iVar4 = DAT_180c63678;
                                                        FUN_1805f68fc(&DAT_1808e8c50);
                                                      }
                                                    }
                                                    lVar7 = FUN_18017ea70();
                                                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                                    if (iVar4 + param_3 == 0) {
                                                      bVar1 = false;
                                                    }
                                                    else {
                                                      local_48[0] = 0;
                                                      cVar2 = FUN_1804514f0(local_48,iVar4 + param_3
                                                                            ,2);
                                                      if (cVar2 == '\0') {
                                                        bVar1 = false;
                                                      }
                                                      else {
                                                        bVar1 = true;
                                                      }
                                                    }
                                                    uVar10 = local_48[0];
                                                    lVar7 = FUN_18017ea70();
                                                    if (*(int *)(lVar7 + 4) != 0) {
                                                      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1
                                                      ;
                                                    }
                                                    if (!bVar1) {
                                                      uVar10 = 0;
                                                    }
                                                    uVar5 = FUN_1801846a0(param_2,param_3,uVar10);
                                                    if ((char)uVar5 != '\0') {
                                                      FUN_180208890(&DAT_180cc9bb0,
                                                                    *(undefined4 *)(lVar9 + 0x38));
                                                      bVar3 = FUN_180202ec0();
                                                      FUN_1802045a0();
                                                      DAT_180ccaa00 = param_3;
                                                      plVar8 = (longlong *)FUN_18017bf40(&local_40);
                                                      DAT_180ccaa08 = *plVar8 + 50000000;
                                                      return (ulonglong)bVar3;
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
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  return uVar5;
}



