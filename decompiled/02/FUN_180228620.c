// FUN_180228620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180228620 */

undefined8 FUN_180228620(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  char local_58 [4];
  float local_54 [15];
  
  cVar3 = FUN_180224970();
  if (cVar3 != '\0') {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    if (param_1 + 0x811 == 0) {
      bVar1 = false;
    }
    else {
      local_58[0] = '\0';
      cVar3 = FUN_1804514f0(local_58,param_1 + 0x811,1);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    cVar3 = local_58[0];
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    if ((bVar1) && (cVar3 == '\0')) {
      fVar8 = *(float *)(param_3 + 4);
      sVar4 = thunk_FUN_180624430(fVar8);
      if (sVar4 < 1) {
        fVar9 = *(float *)(param_3 + 8);
        sVar4 = thunk_FUN_180624430(fVar9);
        if (sVar4 < 1) {
          fVar11 = *(float *)(param_3 + 0xc);
          sVar4 = thunk_FUN_180624430(fVar11);
          if ((((sVar4 < 1) && (ABS(fVar8) <= 20.0)) && (ABS(fVar9) <= 20.0)) &&
             (ABS(fVar11) <= 180.0)) {
            lVar5 = param_1 + 0x81c;
            lVar6 = FUN_18017ea70();
            fVar8 = 0.0;
            *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
            if (lVar5 == 0) {
              bVar1 = false;
            }
            else {
              local_54[0] = 0.0;
              cVar3 = FUN_1804514f0(local_54,lVar5,4);
              if (cVar3 == '\0') {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
            }
            auVar10 = ZEXT464((uint)local_54[0]);
            lVar6 = FUN_18017ea70();
            if (*(int *)(lVar6 + 4) != 0) {
              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
            }
            lVar6 = param_1 + 0x820;
            lVar7 = FUN_18017ea70();
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
            if (lVar6 == 0) {
              bVar2 = false;
            }
            else {
              local_54[0] = fVar8;
              cVar3 = FUN_1804514f0(local_54,lVar6,4);
              if (cVar3 == '\0') {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
            }
            auVar12 = ZEXT464((uint)local_54[0]);
            lVar7 = FUN_18017ea70();
            if (*(int *)(lVar7 + 4) != 0) {
              *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
            }
            if (((bVar1) && (bVar2)) &&
               ((sVar4 = thunk_FUN_180624430(auVar10._0_8_), sVar4 < 1 &&
                (sVar4 = thunk_FUN_180624430(auVar12._0_8_), sVar4 < 1)))) {
              local_54[0] = fVar8;
              cVar3 = FUN_1804513c0(lVar5,4,1);
              if (cVar3 != '\0') {
                lVar7 = FUN_18017ea70();
                *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                cVar3 = FUN_1801ad800(lVar5,local_54);
                lVar5 = FUN_18017ea70();
                if (*(int *)(lVar5 + 4) != 0) {
                  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                }
                if (cVar3 != '\0') {
                  local_54[0] = fVar8;
                  cVar3 = FUN_1804513c0(lVar6,4,1);
                  if (cVar3 != '\0') {
                    lVar5 = FUN_18017ea70();
                    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
                    cVar3 = FUN_1801ad800(lVar6,local_54);
                    lVar5 = FUN_18017ea70();
                    if (*(int *)(lVar5 + 4) != 0) {
                      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                    }
                    if (cVar3 != '\0') {
                      if (param_4 == '\0') {
                        local_54[0] = *(float *)(param_3 + 4);
                        if (*(int *)(param_3 + 0x10) < 0) {
                          local_54[0] = local_54[0] - auVar10._0_4_;
                        }
                      }
                      else {
                        local_54[0] = 0.0;
                      }
                      cVar3 = FUN_1804513c0(param_1 + 0x824,4,1);
                      if (cVar3 != '\0') {
                        lVar5 = FUN_18017ea70();
                        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
                        cVar3 = FUN_1801ad800(param_1 + 0x824,local_54);
                        lVar5 = FUN_18017ea70();
                        if (*(int *)(lVar5 + 4) != 0) {
                          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                        }
                        if (cVar3 != '\0') {
                          if (param_4 == '\0') {
                            local_54[0] = *(float *)(param_3 + 8);
                            if (*(int *)(param_3 + 0x10) < 0) {
                              local_54[0] = local_54[0] - auVar12._0_4_;
                            }
                          }
                          else {
                            local_54[0] = 0.0;
                          }
                          cVar3 = FUN_1804513c0(param_1 + 0x828,4,1);
                          if (cVar3 != '\0') {
                            lVar5 = FUN_18017ea70();
                            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
                            cVar3 = FUN_1801ad800(param_1 + 0x828,local_54);
                            lVar5 = FUN_18017ea70();
                            if (*(int *)(lVar5 + 4) != 0) {
                              *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                            }
                            if (cVar3 != '\0') {
                              if (param_4 == '\0') {
                                fVar8 = *(float *)(param_3 + 0xc);
                              }
                              local_54[0] = fVar8;
                              cVar3 = FUN_1804513c0(param_1 + 0x838,4,1);
                              if (cVar3 != '\0') {
                                lVar5 = FUN_18017ea70();
                                *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
                                cVar3 = FUN_1801ad800(param_1 + 0x838,local_54);
                                lVar5 = FUN_18017ea70();
                                if (*(int *)(lVar5 + 4) != 0) {
                                  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
                                }
                                if (cVar3 != '\0') {
                                  return 1;
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
  return 0;
}



