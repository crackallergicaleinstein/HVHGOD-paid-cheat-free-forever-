// FUN_180206970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180206970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180206970(undefined8 *param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [40];
  undefined1 (*local_50) [16];
  undefined1 local_48 [16];
  ulonglong uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)param_1[1];
  puVar10 = (ulonglong *)*param_1;
  uVar7 = *puVar10;
  local_50 = param_2;
  if (uVar7 < (ulonglong)plVar6[1]) {
    do {
      if (*(byte *)(*plVar6 + uVar7) < 0x21) {
        *puVar10 = uVar7 + 1;
      }
      else {
        if ((ulonglong)plVar6[1] < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_18015ac40();
        }
        uVar11 = plVar6[1] - uVar7;
        uVar4 = 2;
        if (uVar11 < 2) {
          uVar4 = uVar11;
        }
        if ((uVar4 != 2) || (*(short *)(*plVar6 + uVar7) != 0x2f2f)) break;
        uVar5 = FUN_1800f57d0(plVar6,CONCAT71((int7)(uVar7 >> 8),10),uVar7);
        *(undefined8 *)*param_1 = uVar5;
        if (*(longlong *)*param_1 == -1) {
          *(longlong *)*param_1 = *(longlong *)(param_1[1] + 8);
        }
      }
      plVar6 = (longlong *)param_1[1];
      puVar10 = (ulonglong *)*param_1;
      uVar7 = *puVar10;
    } while (uVar7 < (ulonglong)plVar6[1]);
  }
  if (*puVar10 != plVar6[1]) {
    puVar10 = (ulonglong *)param_1[2];
    *puVar10 = *puVar10 + 1;
    if (*puVar10 < 0x16e361) {
      plVar6 = (longlong *)param_1[1];
      lVar1 = *(longlong *)*param_1;
      *(longlong *)*param_1 = lVar1 + 1;
      cVar8 = *(char *)(lVar1 + *plVar6);
      if ((cVar8 == '{') || (cVar8 == '}')) {
        FUN_18015ae30(param_2,1);
      }
      uStack_38 = 0;
      uStack_30 = 0xf;
      local_48._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_48._1_15_;
      local_48 = auVar2 << 8;
      if (cVar8 == '\"') {
        bVar9 = 0;
        plVar6 = (longlong *)param_1[1];
        puVar10 = (ulonglong *)*param_1;
        uVar7 = *puVar10;
        if (uVar7 < (ulonglong)plVar6[1]) {
          do {
            *puVar10 = uVar7 + 1;
            cVar8 = *(char *)(uVar7 + *plVar6);
            if (cVar8 == '\"') {
              bVar9 = 1;
              goto LAB_180206b65;
            }
            if (cVar8 == '\\') {
              plVar6 = (longlong *)param_1[1];
              uVar7 = *(ulonglong *)*param_1;
              if (uVar7 < (ulonglong)plVar6[1]) {
                *(ulonglong *)*param_1 = uVar7 + 1;
                cVar8 = *(char *)(uVar7 + *plVar6);
              }
            }
            FUN_18015af80(local_48,cVar8);
            if (0x10000 < uStack_38) {
              *(undefined1 *)param_1[3] = 0;
              *(undefined1 *)param_1[3] = 0;
              goto LAB_180206bd6;
            }
            plVar6 = (longlong *)param_1[1];
            puVar10 = (ulonglong *)*param_1;
            uVar7 = *puVar10;
          } while (uVar7 < (ulonglong)plVar6[1]);
          *(undefined1 *)param_1[3] = 0;
        }
        else {
LAB_180206b65:
          *(byte *)param_1[3] = *(byte *)param_1[3] & bVar9;
        }
      }
      else {
        FUN_18015af80(local_48,cVar8);
        plVar6 = (longlong *)param_1[1];
        puVar10 = (ulonglong *)*param_1;
        uVar7 = *puVar10;
        if (uVar7 < (ulonglong)plVar6[1]) {
          do {
            if ((*(byte *)(uVar7 + *plVar6) < 0x21) ||
               ((*(byte *)(uVar7 + *plVar6) + 0x85 & 0xfd) == 0)) break;
            *puVar10 = uVar7 + 1;
            FUN_18015af80(local_48,*(undefined1 *)(uVar7 + *plVar6));
            plVar6 = (longlong *)param_1[1];
            puVar10 = (ulonglong *)*param_1;
            uVar7 = *puVar10;
          } while (uVar7 < (ulonglong)plVar6[1]);
        }
      }
LAB_180206bd6:
      *(undefined8 *)*param_2 = local_48._0_8_;
      *(undefined8 *)(*param_2 + 8) = local_48._8_8_;
      *(ulonglong *)param_2[1] = uStack_38;
      *(undefined8 *)(param_2[1] + 8) = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0xf;
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_48._1_15_;
      local_48 = auVar3 << 8;
      FUN_18015c010(local_48);
    }
    *(undefined1 *)param_1[3] = 0;
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 0xf;
  (*param_2)[0] = 0;
}



