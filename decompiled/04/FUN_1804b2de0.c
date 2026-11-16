// FUN_1804b2de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2de0 */

void FUN_1804b2de0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = DAT_180bb8ae8;
  iVar6 = *(int *)(DAT_180bb8ae8 + 0x1fa8);
  if (*(int *)(DAT_180bb8ae8 + 0x1fa8) < param_1) {
    FUN_1804c5a40("Calling PopStyleVar() too many times!");
    param_1 = *(int *)(lVar2 + 0x1fa8);
    iVar6 = param_1;
  }
  if (3 < param_1) {
    uVar3 = (param_1 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar3;
    param_1 = param_1 + uVar3 * -4;
    do {
      lVar4 = (longlong)iVar6;
      lVar1 = *(longlong *)(lVar2 + 0x1fb0);
      lVar5 = (longlong)*(int *)(lVar1 + -0xc + lVar4 * 0xc);
      uVar7 = (ulonglong)*(ushort *)(&DAT_1807b8502 + lVar5 * 4);
      if ((&DAT_1807b8501)[lVar5 * 4] == '\b') {
        if ((*(uint *)(&DAT_1807b8500 + lVar5 * 4) & 0xff) == 1) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
        }
        else if ((*(uint *)(&DAT_1807b8500 + lVar5 * 4) & 0xff) == 2) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
          *(undefined4 *)(uVar7 + 0xc7c + lVar2) = *(undefined4 *)(lVar1 + -4 + lVar4 * 0xc);
        }
      }
      lVar5 = (longlong)*(int *)(lVar2 + 0x1fa8);
      *(int *)(lVar2 + 0x1fa8) = *(int *)(lVar2 + 0x1fa8) + -1;
      lVar1 = *(longlong *)(lVar2 + 0x1fb0);
      lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
      uVar7 = (ulonglong)*(ushort *)(&DAT_1807b8502 + lVar4 * 4);
      if ((&DAT_1807b8501)[lVar4 * 4] == '\b') {
        if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 1) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        }
        else if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 2) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
          *(undefined4 *)(uVar7 + 0xc7c + lVar2) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
        }
      }
      lVar5 = (longlong)*(int *)(lVar2 + 0x1fa8);
      *(int *)(lVar2 + 0x1fa8) = *(int *)(lVar2 + 0x1fa8) + -1;
      lVar1 = *(longlong *)(lVar2 + 0x1fb0);
      lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
      uVar7 = (ulonglong)*(ushort *)(&DAT_1807b8502 + lVar4 * 4);
      if ((&DAT_1807b8501)[lVar4 * 4] == '\b') {
        if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 1) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        }
        else if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 2) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
          *(undefined4 *)(uVar7 + 0xc7c + lVar2) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
        }
      }
      lVar5 = (longlong)*(int *)(lVar2 + 0x1fa8);
      *(int *)(lVar2 + 0x1fa8) = *(int *)(lVar2 + 0x1fa8) + -1;
      lVar1 = *(longlong *)(lVar2 + 0x1fb0);
      lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
      uVar7 = (ulonglong)*(ushort *)(&DAT_1807b8502 + lVar4 * 4);
      if ((&DAT_1807b8501)[lVar4 * 4] == '\b') {
        if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 1) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        }
        else if ((*(uint *)(&DAT_1807b8500 + lVar4 * 4) & 0xff) == 2) {
          *(undefined4 *)(uVar7 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
          *(undefined4 *)(uVar7 + 0xc7c + lVar2) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
        }
      }
      iVar6 = *(int *)(lVar2 + 0x1fa8) + -1;
      *(int *)(lVar2 + 0x1fa8) = iVar6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    lVar4 = (longlong)iVar6;
    lVar1 = *(longlong *)(lVar2 + 0x1fb0);
    lVar5 = (longlong)*(int *)(lVar1 + -0xc + lVar4 * 0xc);
    uVar8 = (ulonglong)*(ushort *)(&DAT_1807b8502 + lVar5 * 4);
    if ((&DAT_1807b8501)[lVar5 * 4] == '\b') {
      if ((&DAT_1807b8500)[lVar5 * 4] == '\x01') {
        *(undefined4 *)(uVar8 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
      }
      else if ((&DAT_1807b8500)[lVar5 * 4] == '\x02') {
        *(undefined4 *)(uVar8 + 0xc78 + lVar2) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
        *(undefined4 *)(uVar8 + 0xc7c + lVar2) = *(undefined4 *)(lVar1 + -4 + lVar4 * 0xc);
      }
    }
    *(int *)(lVar2 + 0x1fa8) = *(int *)(lVar2 + 0x1fa8) + -1;
    iVar6 = *(int *)(lVar2 + 0x1fa8);
  }
  return;
}



