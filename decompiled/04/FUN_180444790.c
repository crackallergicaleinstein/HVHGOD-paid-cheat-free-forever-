// FUN_180444790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180444790 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180444790(longlong param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  
  uVar13 = (**(code **)(param_1 + 0x238))();
  if ((-1 < (int)uVar13) &&
     (uVar13 = (**(code **)(param_1 + 0x1f8))(param_1,param_2,param_3), -1 < (int)uVar13)) {
    lVar7 = 0x48;
    if (*param_2 == '\0') {
      lVar7 = 0x28;
    }
    puVar5 = *(undefined1 **)(param_2 + lVar7);
    cVar1 = *(char *)(*param_3 + 0x19);
joined_r0x00018044480d:
    do {
      do {
        cVar1 = cVar1 + -1;
        if (cVar1 < '\0') {
          return 0x100000;
        }
        lVar7 = (longlong)cVar1 * 0x50 + param_3[1];
      } while (((cVar1 == '\x01') && (*(int *)(lVar7 + 0x20) == 1)) && (*(int *)(lVar7 + 0xc) == 6))
      ;
      cVar2 = *param_2;
      lVar8 = 0x48;
      if (cVar2 == '\0') {
        lVar8 = 0x28;
      }
      lVar9 = *(longlong *)(param_2 + 0x28);
      puVar6 = *(undefined1 **)(param_2 + lVar8);
      if (puVar6 == puVar5) {
        if (cVar2 != '\0') {
          if (*(ulonglong *)(param_2 + 8) <= lVar9 + 4U) {
            return 0x80100009;
          }
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar9;
          *(undefined4 *)(lVar9 + *(longlong *)(param_2 + 0x48)) = 0x200001;
          lVar9 = lVar9 + 2;
          goto LAB_1804448f2;
        }
        if (*(ulonglong *)(param_2 + 0x30) < lVar9 + 1U) {
          return 0x80100009;
        }
        *(undefined2 *)(lVar9 + -1 + *(longlong *)(param_2 + 0x48)) = 0x20;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
      }
      else if (cVar2 == '\0') {
        if (*(ulonglong *)(param_2 + 0x30) < lVar9 + 2U) {
          return 0x80100009;
        }
        lVar8 = *(longlong *)(param_2 + 0x48);
        *(undefined2 *)(lVar8 + -1 + lVar9) = 0x202c;
        *(undefined1 *)(lVar8 + 1 + lVar9) = 0;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 2;
      }
      else {
        if (*(ulonglong *)(param_2 + 8) <= lVar9 + 8U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar9;
        *(undefined8 *)(lVar9 + *(longlong *)(param_2 + 0x48)) = 0x200001002c0202;
        lVar9 = lVar9 + 6;
LAB_1804448f2:
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar9;
        uVar12 = *(longlong *)(param_2 + 8) - lVar9;
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        *(ulonglong *)(param_2 + 8) = uVar12;
        uVar10 = 0xff;
        if (uVar12 < 0xff) {
          uVar10 = uVar12;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar10;
      }
      plVar14 = (longlong *)(param_2 + 0x48);
      param_3[2] = lVar7;
      if (*(code **)(param_1 + 0x1c8) != (code *)0x0) {
        uVar13 = (**(code **)(param_1 + 0x1c8))(param_1,param_2,param_3);
        if ((int)uVar13 != 0x20000b) {
          if ((int)uVar13 < 0) {
            return uVar13;
          }
          goto LAB_1804449b7;
        }
LAB_180444960:
        if (*param_2 == '\0') {
          *(undefined1 **)(param_2 + 0x28) = puVar6;
          puVar6[*plVar14 + -1] = 0;
        }
        else {
          param_2[0x28] = '\x01';
          param_2[0x29] = '\0';
          param_2[0x2a] = '\0';
          param_2[0x2b] = '\0';
          param_2[0x2c] = '\0';
          param_2[0x2d] = '\0';
          param_2[0x2e] = '\0';
          param_2[0x2f] = '\0';
          uVar12 = (*(longlong *)(param_2 + 8) - (longlong)puVar6) + *plVar14;
          *(ulonglong *)(param_2 + 8) = uVar12;
          *plVar14 = (longlong)puVar6;
          uVar10 = 0xff;
          if (uVar12 < 0xff) {
            uVar10 = uVar12;
          }
          *(ulonglong *)(param_2 + 0x30) = uVar10;
          *puVar6 = 0;
        }
        goto joined_r0x00018044480d;
      }
LAB_1804449b7:
      iVar4 = *(int *)(lVar7 + 0x20);
      if (iVar4 == 1) {
        pcVar11 = *(code **)(param_1 + 0x1d8);
      }
      else if (iVar4 == 2) {
        pcVar11 = *(code **)(param_1 + 0x1e0);
      }
      else if (iVar4 == 3) {
        pcVar11 = *(code **)(param_1 + 0x1e8);
      }
      else {
        if (iVar4 != 4) {
          return 0x80100004;
        }
        pcVar11 = *(code **)(param_1 + 0x1f0);
      }
      uVar13 = (*pcVar11)(param_1,param_2,param_3);
      if ((int)uVar13 == 0x20000b) goto LAB_180444960;
      if ((int)uVar13 < 0) {
        return uVar13;
      }
      if (*(code **)(param_1 + 0x1d0) != (code *)0x0) {
        uVar13 = (**(code **)(param_1 + 0x1d0))(param_1,param_2,param_3);
        if ((int)uVar13 == 0x20000b) goto LAB_180444960;
        if (-1 < (int)uVar13) {
          return uVar13;
        }
      }
      iVar4 = *(int *)(*param_3 + 0xc);
      if ((iVar4 != 4) && (iVar4 != 5)) goto joined_r0x00018044480d;
      if (((cVar1 == '\0') &&
          ((1 < *(byte *)(*param_3 + 0x19) && (*(int *)(param_3[1] + 0x5c) == 6)))) &&
         (uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,1), (int)uVar13 < 0)) {
        return uVar13;
      }
      if (*(int *)(lVar7 + 0x20) == 2) {
        uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,2);
        if ((int)uVar13 < 0) {
          return uVar13;
        }
        if (*(int *)(*param_3 + 0xc) != 5) goto joined_r0x00018044480d;
        uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,6);
        if ((int)uVar13 < 0) {
          return uVar13;
        }
        uVar13 = 7;
      }
      else {
        bVar3 = *(byte *)(*param_3 + 0x19);
        if ((int)cVar1 == bVar3 - 1) {
          if (*(int *)(lVar7 + 0x20) == 4) goto joined_r0x00018044480d;
        }
        else {
          if ((int)(uint)bVar3 <= cVar1 + 1) goto joined_r0x00018044480d;
          if ((*(int *)(param_3[1] + 0x20 + ((longlong)cVar1 + 1) * 0x50) != 4) &&
             (*(int *)(param_3[1] + 4 + ((longlong)cVar1 + 1) * 0x50) != 3))
          goto joined_r0x00018044480d;
        }
        if ((*(int *)(*param_3 + 0xc) == 5) &&
           (uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,5), (int)uVar13 < 0)) {
          return uVar13;
        }
        uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,3);
        if ((int)uVar13 < 0) {
          return uVar13;
        }
        uVar13 = 4;
      }
      uVar13 = (**(code **)(param_1 + 0x240))(param_1,param_2,param_3,uVar13);
    } while (-1 < (int)uVar13);
  }
  return uVar13;
}



