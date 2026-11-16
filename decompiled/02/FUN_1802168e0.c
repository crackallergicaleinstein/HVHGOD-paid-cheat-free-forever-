// FUN_1802168e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802168e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802168e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined *local_38 [2];
  
  if ((DAT_180c710a8 != '\0') && (DAT_180c7108c != '\0')) {
    DAT_180c710c8 = 0;
    cVar1 = FUN_1802239e0(param_3);
    iVar2 = DAT_180c63ab8;
    if (cVar1 != '\0') {
      uVar6 = 0xffffffffffffffff;
      if ((DAT_180c63ab8 == 0) && (UVar3 = GetTickCount64(), DAT_180c63ab0 <= UVar3)) {
        local_38[0] = &DAT_1808ea6a0;
        iVar2 = FUN_1805f68d0(&DAT_1808ea6a0);
        if (iVar2 != 0) goto LAB_1802176f9;
        if (DAT_1808ea6ec == 0x7fffffff) {
          DAT_1808ea6ec = 0x7ffffffe;
          goto LAB_18021770e;
        }
        if ((DAT_180c63ab8 == 0) && (DAT_180c63ab0 <= UVar3)) {
          DAT_180c63ab8 = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180c63ab8 == 0) {
            DAT_180c63ab0 = UVar3 + 1000;
          }
          else {
            DAT_180c63ab0 = 0xffffffffffffffff;
          }
        }
        iVar2 = DAT_180c63ab8;
        FUN_1805f68fc(&DAT_1808ea6a0);
      }
      cVar1 = FUN_1801fddf0(iVar2 + param_3,&DAT_180c70f18);
      iVar2 = DAT_180c63aa4;
      if (cVar1 != '\0') {
        if ((DAT_180c63aa4 == 0) && (UVar3 = GetTickCount64(), DAT_180c63aa8 <= UVar3)) {
          local_38[0] = &DAT_1808ea650;
          iVar2 = FUN_1805f68d0(&DAT_1808ea650);
          if (iVar2 != 0) goto LAB_1802176f9;
          if (DAT_1808ea69c == 0x7fffffff) {
            DAT_1808ea69c = 0x7ffffffe;
            goto LAB_18021770e;
          }
          if ((DAT_180c63aa4 == 0) && (DAT_180c63aa8 <= UVar3)) {
            DAT_180c63aa4 = FUN_1804174b0("C_EconItemView",0x216db5e3);
            if (DAT_180c63aa4 == 0) {
              DAT_180c63aa8 = UVar3 + 1000;
            }
            else {
              DAT_180c63aa8 = 0xffffffffffffffff;
            }
          }
          iVar2 = DAT_180c63aa4;
          FUN_1805f68fc(&DAT_1808ea650);
        }
        cVar1 = FUN_1804513c0(iVar2 + param_3,1,1);
        if (cVar1 != '\0') {
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          cVar1 = FUN_1801ad7b0(iVar2 + param_3,&DAT_180c70f20);
          lVar4 = FUN_18017ea70();
          if (*(int *)(lVar4 + 4) != 0) {
            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
          }
          iVar2 = DAT_180c63aa0;
          if (cVar1 != '\0') {
            if ((DAT_180c63aa0 == 0) && (UVar3 = GetTickCount64(), DAT_180c63a98 <= UVar3)) {
              local_38[0] = &DAT_1808ea600;
              iVar2 = FUN_1805f68d0(&DAT_1808ea600);
              if (iVar2 != 0) goto LAB_1802176f9;
              if (DAT_1808ea64c == 0x7fffffff) {
                DAT_1808ea64c = 0x7ffffffe;
                goto LAB_18021770e;
              }
              if ((DAT_180c63aa0 == 0) && (DAT_180c63a98 <= UVar3)) {
                DAT_180c63aa0 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
                if (DAT_180c63aa0 == 0) {
                  DAT_180c63a98 = UVar3 + 1000;
                }
                else {
                  DAT_180c63a98 = 0xffffffffffffffff;
                }
              }
              iVar2 = DAT_180c63aa0;
              FUN_1805f68fc(&DAT_1808ea600);
            }
            cVar1 = FUN_1804513c0(iVar2 + param_3,2,1);
            if (cVar1 != '\0') {
              lVar4 = FUN_18017ea70();
              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
              cVar1 = FUN_1801aec90(iVar2 + param_3,&DAT_180c70f10);
              lVar4 = FUN_18017ea70();
              if (*(int *)(lVar4 + 4) != 0) {
                *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
              }
              iVar2 = DAT_180c63a8c;
              if (cVar1 != '\0') {
                if ((DAT_180c63a8c == 0) && (UVar3 = GetTickCount64(), DAT_180c63a90 <= UVar3)) {
                  local_38[0] = &DAT_1808ea5b0;
                  iVar2 = FUN_1805f68d0(&DAT_1808ea5b0);
                  if (iVar2 != 0) goto LAB_1802176f9;
                  if (DAT_1808ea5fc == 0x7fffffff) {
                    DAT_1808ea5fc = 0x7ffffffe;
                    goto LAB_18021770e;
                  }
                  if ((DAT_180c63a8c == 0) && (DAT_180c63a90 <= UVar3)) {
                    DAT_180c63a8c = FUN_1804174b0("C_EconItemView",0x373ee446);
                    if (DAT_180c63a8c == 0) {
                      DAT_180c63a90 = UVar3 + 1000;
                    }
                    else {
                      DAT_180c63a90 = 0xffffffffffffffff;
                    }
                  }
                  iVar2 = DAT_180c63a8c;
                  FUN_1805f68fc(&DAT_1808ea5b0);
                }
                cVar1 = FUN_1804513c0(iVar2 + param_3,4,1);
                if (cVar1 != '\0') {
                  lVar4 = FUN_18017ea70();
                  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                  cVar1 = FUN_1801ad800(iVar2 + param_3,&DAT_180c70f24);
                  lVar4 = FUN_18017ea70();
                  if (*(int *)(lVar4 + 4) != 0) {
                    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                  }
                  iVar2 = DAT_180c63a88;
                  if (cVar1 != '\0') {
                    if ((DAT_180c63a88 == 0) && (UVar3 = GetTickCount64(), DAT_180c63a80 <= UVar3))
                    {
                      local_38[0] = &DAT_1808ea560;
                      iVar2 = FUN_1805f68d0(&DAT_1808ea560);
                      if (iVar2 != 0) goto LAB_1802176f9;
                      if (DAT_1808ea5ac == 0x7fffffff) {
                        DAT_1808ea5ac = 0x7ffffffe;
                        goto LAB_18021770e;
                      }
                      if ((DAT_180c63a88 == 0) && (DAT_180c63a80 <= UVar3)) {
                        DAT_180c63a88 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
                        if (DAT_180c63a88 == 0) {
                          DAT_180c63a80 = UVar3 + 1000;
                        }
                        else {
                          DAT_180c63a80 = 0xffffffffffffffff;
                        }
                      }
                      iVar2 = DAT_180c63a88;
                      FUN_1805f68fc(&DAT_1808ea560);
                    }
                    cVar1 = FUN_1804513c0(iVar2 + param_3,4,1);
                    if (cVar1 != '\0') {
                      lVar4 = FUN_18017ea70();
                      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                      cVar1 = FUN_1801ad800(iVar2 + param_3,&DAT_180c70f28);
                      lVar4 = FUN_18017ea70();
                      if (*(int *)(lVar4 + 4) != 0) {
                        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                      }
                      iVar2 = DAT_180c63a74;
                      if (cVar1 != '\0') {
                        if ((DAT_180c63a74 == 0) &&
                           (UVar3 = GetTickCount64(), DAT_180c63a78 <= UVar3)) {
                          local_38[0] = &DAT_1808ea510;
                          iVar2 = FUN_1805f68d0(&DAT_1808ea510);
                          if (iVar2 != 0) goto LAB_1802176f9;
                          if (DAT_1808ea55c == 0x7fffffff) {
                            DAT_1808ea55c = 0x7ffffffe;
                            goto LAB_18021770e;
                          }
                          if ((DAT_180c63a74 == 0) && (DAT_180c63a78 <= UVar3)) {
                            DAT_180c63a74 = FUN_1804174b0("C_EconItemView",0xc65de986);
                            if (DAT_180c63a74 == 0) {
                              DAT_180c63a78 = UVar3 + 1000;
                            }
                            else {
                              DAT_180c63a78 = 0xffffffffffffffff;
                            }
                          }
                          iVar2 = DAT_180c63a74;
                          FUN_1805f68fc(&DAT_1808ea510);
                        }
                        cVar1 = FUN_1804513c0(iVar2 + param_3,4,1);
                        if (cVar1 != '\0') {
                          lVar4 = FUN_18017ea70();
                          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                          cVar1 = FUN_1801ad800(iVar2 + param_3,&DAT_180c70f2c);
                          lVar4 = FUN_18017ea70();
                          if (*(int *)(lVar4 + 4) != 0) {
                            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                          }
                          iVar2 = DAT_180c63a70;
                          if (cVar1 != '\0') {
                            if ((DAT_180c63a70 == 0) &&
                               (UVar3 = GetTickCount64(), DAT_180c63a68 <= UVar3)) {
                              local_38[0] = &DAT_1808ea4c0;
                              iVar2 = FUN_1805f68d0(&DAT_1808ea4c0);
                              if (iVar2 != 0) goto LAB_1802176f9;
                              if (DAT_1808ea50c == 0x7fffffff) {
                                DAT_1808ea50c = 0x7ffffffe;
                                goto LAB_18021770e;
                              }
                              if ((DAT_180c63a70 == 0) && (DAT_180c63a68 <= UVar3)) {
                                DAT_180c63a70 = FUN_1804174b0("C_EconItemView",0x710abdd);
                                if (DAT_180c63a70 == 0) {
                                  DAT_180c63a68 = UVar3 + 1000;
                                }
                                else {
                                  DAT_180c63a68 = 0xffffffffffffffff;
                                }
                              }
                              iVar2 = DAT_180c63a70;
                              FUN_1805f68fc(&DAT_1808ea4c0);
                            }
                            cVar1 = FUN_1804513c0(iVar2 + param_3,1,1);
                            if (cVar1 != '\0') {
                              lVar4 = FUN_18017ea70();
                              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                              cVar1 = FUN_1801ad7b0(iVar2 + param_3,&DAT_180c70f30);
                              lVar4 = FUN_18017ea70();
                              if (*(int *)(lVar4 + 4) != 0) {
                                *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                              }
                              iVar2 = DAT_180c63a5c;
                              if (cVar1 != '\0') {
                                if ((DAT_180c63a5c == 0) &&
                                   (UVar3 = GetTickCount64(), DAT_180c63a60 <= UVar3)) {
                                  local_38[0] = &DAT_1808ea470;
                                  iVar2 = FUN_1805f68d0(&DAT_1808ea470);
                                  if (iVar2 != 0) goto LAB_1802176f9;
                                  if (DAT_1808ea4bc == 0x7fffffff) {
                                    DAT_1808ea4bc = 0x7ffffffe;
                                    goto LAB_18021770e;
                                  }
                                  if ((DAT_180c63a5c == 0) && (DAT_180c63a60 <= UVar3)) {
                                    DAT_180c63a5c = FUN_1804174b0("C_EconEntity",0xa12d48f);
                                    if (DAT_180c63a5c == 0) {
                                      DAT_180c63a60 = UVar3 + 1000;
                                    }
                                    else {
                                      DAT_180c63a60 = 0xffffffffffffffff;
                                    }
                                  }
                                  iVar2 = DAT_180c63a5c;
                                  FUN_1805f68fc(&DAT_1808ea470);
                                }
                                cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
                                if (cVar1 != '\0') {
                                  lVar4 = FUN_18017ea70();
                                  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                                  cVar1 = FUN_1801ad800(iVar2 + param_2,&DAT_180c70f34);
                                  lVar4 = FUN_18017ea70();
                                  if (*(int *)(lVar4 + 4) != 0) {
                                    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                                  }
                                  iVar2 = DAT_180c63a58;
                                  if (cVar1 != '\0') {
                                    if ((DAT_180c63a58 == 0) &&
                                       (UVar3 = GetTickCount64(), DAT_180c63a50 <= UVar3)) {
                                      local_38[0] = &DAT_1808ea420;
                                      iVar2 = FUN_1805f68d0(&DAT_1808ea420);
                                      if (iVar2 != 0) goto LAB_1802176f9;
                                      if (DAT_1808ea46c == 0x7fffffff) {
                                        DAT_1808ea46c = 0x7ffffffe;
                                        goto LAB_18021770e;
                                      }
                                      if ((DAT_180c63a58 == 0) && (DAT_180c63a50 <= UVar3)) {
                                        DAT_180c63a58 = FUN_1804174b0("C_EconEntity",0xa1b165b2);
                                        if (DAT_180c63a58 == 0) {
                                          DAT_180c63a50 = UVar3 + 1000;
                                        }
                                        else {
                                          DAT_180c63a50 = 0xffffffffffffffff;
                                        }
                                      }
                                      iVar2 = DAT_180c63a58;
                                      FUN_1805f68fc(&DAT_1808ea420);
                                    }
                                    cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
                                    if (cVar1 != '\0') {
                                      lVar4 = FUN_18017ea70();
                                      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                                      cVar1 = FUN_1801ad800(iVar2 + param_2,&DAT_180c70f38);
                                      lVar4 = FUN_18017ea70();
                                      if (*(int *)(lVar4 + 4) != 0) {
                                        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                                      }
                                      iVar2 = DAT_180c63a44;
                                      if (cVar1 != '\0') {
                                        if ((DAT_180c63a44 == 0) &&
                                           (UVar3 = GetTickCount64(), DAT_180c63a48 <= UVar3)) {
                                          local_38[0] = &DAT_1808ea3d0;
                                          iVar2 = FUN_1805f68d0(&DAT_1808ea3d0);
                                          if (iVar2 != 0) goto LAB_1802176f9;
                                          if (DAT_1808ea41c == 0x7fffffff) {
                                            DAT_1808ea41c = 0x7ffffffe;
                                            goto LAB_18021770e;
                                          }
                                          if ((DAT_180c63a44 == 0) && (DAT_180c63a48 <= UVar3)) {
                                            DAT_180c63a44 = FUN_1804174b0("C_EconEntity",0x86253266)
                                            ;
                                            if (DAT_180c63a44 == 0) {
                                              DAT_180c63a48 = UVar3 + 1000;
                                            }
                                            else {
                                              DAT_180c63a48 = 0xffffffffffffffff;
                                            }
                                          }
                                          iVar2 = DAT_180c63a44;
                                          FUN_1805f68fc(&DAT_1808ea3d0);
                                        }
                                        cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
                                        if (cVar1 != '\0') {
                                          lVar4 = FUN_18017ea70();
                                          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                                          cVar1 = FUN_1801ad800(iVar2 + param_2,&DAT_180c70f3c);
                                          lVar4 = FUN_18017ea70();
                                          if (*(int *)(lVar4 + 4) != 0) {
                                            *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                                          }
                                          iVar2 = DAT_180c63a40;
                                          if (cVar1 != '\0') {
                                            if ((DAT_180c63a40 == 0) &&
                                               (UVar3 = GetTickCount64(), DAT_180c63a38 <= UVar3)) {
                                              local_38[0] = &DAT_1808ea380;
                                              iVar2 = FUN_1805f68d0(&DAT_1808ea380);
                                              if (iVar2 != 0) goto LAB_1802176f9;
                                              if (DAT_1808ea3cc == 0x7fffffff) {
                                                DAT_1808ea3cc = 0x7ffffffe;
                                                goto LAB_18021770e;
                                              }
                                              if ((DAT_180c63a40 == 0) && (DAT_180c63a38 <= UVar3))
                                              {
                                                DAT_180c63a40 =
                                                     FUN_1804174b0("C_EconEntity",0x67ecc1e7);
                                                if (DAT_180c63a40 == 0) {
                                                  DAT_180c63a38 = UVar3 + 1000;
                                                }
                                                else {
                                                  DAT_180c63a38 = 0xffffffffffffffff;
                                                }
                                              }
                                              iVar2 = DAT_180c63a40;
                                              FUN_1805f68fc(&DAT_1808ea380);
                                            }
                                            cVar1 = FUN_1804513c0(iVar2 + param_2,4,1);
                                            if (cVar1 != '\0') {
                                              lVar4 = FUN_18017ea70();
                                              *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                                              cVar1 = FUN_1801ad800(iVar2 + param_2,&DAT_180c70f40);
                                              lVar4 = FUN_18017ea70();
                                              if (*(int *)(lVar4 + 4) != 0) {
                                                *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
                                              }
                                              iVar2 = DAT_180c63a2c;
                                              if (cVar1 != '\0') {
                                                if ((DAT_180c63a2c == 0) &&
                                                   (UVar3 = GetTickCount64(), DAT_180c63a30 <= UVar3
                                                   )) {
                                                  local_38[0] = &DAT_1808ea330;
                                                  iVar2 = FUN_1805f68d0(&DAT_1808ea330);
                                                  if (iVar2 != 0) goto LAB_1802176f9;
                                                  if (DAT_1808ea37c == 0x7fffffff) {
                                                    DAT_1808ea37c = 0x7ffffffe;
                                                    goto LAB_18021770e;
                                                  }
                                                  if ((DAT_180c63a2c == 0) &&
                                                     (DAT_180c63a30 <= UVar3)) {
                                                    DAT_180c63a2c =
                                                         FUN_1804174b0("C_EconItemView",0xafd12ee8);
                                                    if (DAT_180c63a2c == 0) {
                                                      DAT_180c63a30 = UVar3 + 1000;
                                                    }
                                                    else {
                                                      DAT_180c63a30 = 0xffffffffffffffff;
                                                    }
                                                  }
                                                  iVar2 = DAT_180c63a2c;
                                                  FUN_1805f68fc(&DAT_1808ea330);
                                                }
                                                cVar1 = FUN_180204bc0(iVar2 + param_3,&DAT_180c70f44
                                                                     );
                                                iVar2 = DAT_180c63a28;
                                                if (cVar1 != '\0') {
                                                  if ((DAT_180c63a28 == 0) &&
                                                     (UVar3 = GetTickCount64(),
                                                     DAT_180c63a20 <= UVar3)) {
                                                    local_38[0] = &DAT_1808ea2e0;
                                                    iVar2 = FUN_1805f68d0(&DAT_1808ea2e0);
                                                    if (iVar2 != 0) goto LAB_1802176f9;
                                                    if (DAT_1808ea32c == 0x7fffffff) {
                                                      DAT_1808ea32c = 0x7ffffffe;
                                                      goto LAB_18021770e;
                                                    }
                                                    if ((DAT_180c63a28 == 0) &&
                                                       (DAT_180c63a20 <= UVar3)) {
                                                      DAT_180c63a28 =
                                                           FUN_1804174b0("C_EconItemView",0xa74a6ed8
                                                                        );
                                                      if (DAT_180c63a28 == 0) {
                                                        DAT_180c63a20 = UVar3 + 1000;
                                                      }
                                                      else {
                                                        DAT_180c63a20 = 0xffffffffffffffff;
                                                      }
                                                    }
                                                    iVar2 = DAT_180c63a28;
                                                    FUN_1805f68fc(&DAT_1808ea2e0);
                                                  }
                                                  cVar1 = FUN_180204bc0(iVar2 + param_3,
                                                                        &DAT_180c70fe5);
                                                  iVar2 = DAT_180c63a10;
                                                  if (cVar1 != '\0') {
                                                    if ((DAT_180c63a10 == 0) &&
                                                       (UVar3 = GetTickCount64(),
                                                       DAT_180c63a18 <= UVar3)) {
                                                      local_38[0] = &DAT_1808ea290;
                                                      iVar2 = FUN_1805f68d0(&DAT_1808ea290);
                                                      if (iVar2 != 0) {
LAB_1802176f9:
                    /* WARNING: Subroutine does not return */
                                                        FUN_1805f6d44(5);
                                                      }
                                                      if (DAT_1808ea2dc == 0x7fffffff) {
                                                        DAT_1808ea2dc = 0x7ffffffe;
LAB_18021770e:
                    /* WARNING: Subroutine does not return */
                                                        FUN_1805f6d44(6);
                                                      }
                                                      if ((DAT_180c63a10 == 0) &&
                                                         (DAT_180c63a18 <= UVar3)) {
                                                        DAT_180c63a10 =
                                                             FUN_1804174b0("C_EconItemView",
                                                                           0x6a67d4c4);
                                                        if (DAT_180c63a10 == 0) {
                                                          uVar6 = UVar3 + 1000;
                                                        }
                                                        DAT_180c63a18 = uVar6;
                                                      }
                                                      iVar2 = DAT_180c63a10;
                                                      FUN_1805f68fc(&DAT_1808ea290);
                                                    }
                                                    cVar1 = FUN_1804513c0(iVar2 + param_3,4,1);
                                                    if (cVar1 != '\0') {
                                                      lVar4 = FUN_18017ea70();
                                                      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
                                                      cVar1 = FUN_1801ad800(iVar2 + param_3,
                                                                            &DAT_180c71088);
                                                      lVar4 = FUN_18017ea70();
                                                      if (*(int *)(lVar4 + 4) != 0) {
                                                        *(int *)(lVar4 + 4) =
                                                             *(int *)(lVar4 + 4) + -1;
                                                      }
                                                      if (cVar1 != '\0') {
                                                        FUN_180208890(&DAT_180cc9bb0,DAT_180c70f34);
                                                        cVar1 = FUN_1801846a0(param_2,param_3,
                                                                              DAT_180c70f10);
                                                        if (cVar1 != '\0') {
                                                          cVar1 = FUN_180217720();
                                                          FUN_180218a40();
                                                          DAT_180c710c8 = param_3;
                                                          plVar5 = (longlong *)
                                                                   FUN_18017bf40(local_38);
                                                          DAT_180c710d0 = *plVar5 + 50000000;
                                                          if (cVar1 != '\0') {
                                                            _DAT_180c710a8 = 0;
                                                            return;
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
    _DAT_180c710a8 = CONCAT11(1,DAT_180c710a8);
  }
  return;
}



