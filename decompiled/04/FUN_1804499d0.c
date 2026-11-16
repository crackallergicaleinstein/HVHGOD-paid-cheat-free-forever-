// FUN_1804499d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804499d0 */

undefined8 FUN_1804499d0(longlong param_1,ulonglong param_2,byte param_3,char param_4,char param_5)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar10 = *(longlong *)(param_1 + 0x20) - lVar1;
  if (param_3 <= uVar10) {
    if (param_2 != 0) {
      bVar2 = 0;
      puVar11 = (undefined1 *)0x0;
      cVar6 = '\a';
      if ((param_2 & 0xffffffff00000000) != 0) {
        cVar6 = '\x0f';
      }
      do {
        iVar9 = (int)cVar6;
        uVar8 = param_2 >> ((ulonglong)(uint)(iVar9 * 4) & 0x3f);
        bVar7 = (byte)uVar8 & 0xf;
        if (bVar2 == 0) {
          if ((uVar8 & 0xf) != 0) {
            if (((param_4 == '\0') || (bVar7 < 10)) || (iVar9 < (int)(uint)param_3)) {
              lVar4 = 0;
            }
            else {
              lVar4 = 1;
            }
            if (uVar10 <= (ulonglong)(lVar4 + cVar6)) {
              return 0x80100009;
            }
            puVar11 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + -1 + lVar1);
            if ((char)lVar4 != '\0') {
              *puVar11 = 0x30;
              bVar2 = 1;
            }
            if (iVar9 < (int)(uint)param_3) {
              bVar2 = (param_3 - cVar6) - 1;
              FUN_18063ab10(puVar11,0x30,bVar2);
            }
            goto LAB_180449b23;
          }
        }
        else {
LAB_180449b23:
          if (param_5 == '\0') {
            cVar3 = "0123456789abcdef"[bVar7];
          }
          else {
            cVar3 = "0123456789ABCDEF"[bVar7];
          }
          puVar11[bVar2] = cVar3;
          bVar2 = bVar2 + 1;
        }
        cVar6 = cVar6 + -1;
        if (cVar6 < '\0') {
          *(ulonglong *)(param_1 + 0x18) = (ulonglong)bVar2 + lVar1;
          *(undefined1 *)((ulonglong)bVar2 + *(longlong *)(param_1 + 0x38) + -1 + lVar1) = 0;
          return 0x100000;
        }
      } while( true );
    }
    uVar5 = (uint)param_3;
    if (param_3 == 0) {
      uVar5 = 1;
    }
    uVar8 = (ulonglong)uVar5;
    if (uVar8 <= uVar10) {
      FUN_18063ab10(*(longlong *)(param_1 + 0x38) + -1 + lVar1,0x30,uVar5);
      *(ulonglong *)(param_1 + 0x18) = lVar1 + uVar8;
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + lVar1 + -1 + uVar8) = 0;
      return 0x100000;
    }
  }
  return 0x80100009;
}



