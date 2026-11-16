// FUN_1804f92b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f92b0 */

int FUN_1804f92b0(longlong *param_1,float param_2,float param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined8 local_res8;
  float local_res20;
  float local_res24;
  
  iVar4 = (int)param_1[3];
  *param_4 = 0;
  iVar5 = 0;
  iVar7 = 0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar8 = 0.0;
  if (iVar4 < 1) {
LAB_1804f93f0:
    if (iVar5 < iVar4) {
      if (param_2 < fVar9) {
        return iVar5;
      }
      if ((param_2 < fVar8) && (iVar4 = 0, 0 < iVar7)) {
        do {
          fVar8 = (float)FUN_1804f8920(param_1,iVar5,iVar4);
          fVar10 = fVar8 + fVar9;
          iVar6 = iVar4 + iVar5;
          if (param_2 < fVar10) {
            *param_4 = (uint)(iVar4 != 0);
            if (param_2 < fVar8 * 0.5 + fVar9) {
              return iVar6;
            }
            iVar4 = (int)param_1[3];
            if (iVar6 < iVar4) {
              iVar4 = FUN_1804b0e50(&local_res8,(longlong)iVar6 + param_1[4],
                                    (longlong)iVar4 + param_1[4]);
              return iVar4 + iVar6;
            }
            return iVar4 + 1;
          }
          iVar4 = (int)param_1[3];
          fVar9 = fVar10;
          if (iVar6 < iVar4) {
            iVar4 = FUN_1804b0e50(&local_res8,(longlong)iVar6 + param_1[4],
                                  (longlong)iVar4 + param_1[4]);
            iVar4 = iVar6 + iVar4;
          }
          else {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 - iVar5;
        } while (iVar4 < iVar7);
      }
      iVar4 = iVar7 + iVar5;
      if (*(char *)(param_1[4] + -1 + (longlong)iVar4) == '\n') {
        iVar4 = iVar4 + -1;
      }
    }
    else {
    }
  }
  else {
    auVar11 = ZEXT464(0x7f7fffff);
    do {
      lVar1 = *param_1;
      lVar2 = param_1[4];
      lVar3 = (int)param_1[3] + lVar2;
      local_res8 = 0;
      FUN_1804ea040(&local_res20,*(undefined8 *)(lVar1 + 0x11d0),*(undefined4 *)(lVar1 + 0x11e0),
                    auVar11._0_8_,*(undefined4 *)(lVar1 + 0x2550),iVar5 + lVar2,lVar3,lVar3,
                    &local_res8);
      iVar6 = (int)local_res8 - (int)lVar2;
      iVar7 = iVar6 - iVar5;
      if (iVar7 < 1) {
        return iVar4;
      }
      if ((iVar5 == 0) && (param_3 < fVar10 + fVar9)) {
        return 0;
      }
      fVar10 = fVar10 + local_res24;
      fVar8 = local_res20;
      if (param_3 < fVar10) goto LAB_1804f93f0;
      iVar5 = iVar6;
    } while (iVar6 < iVar4);
  }
  *param_4 = 1;
  return iVar4;
}



