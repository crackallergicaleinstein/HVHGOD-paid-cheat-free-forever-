// FUN_180166360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180166360 */

undefined1 (*) [16]
FUN_180166360(undefined1 (*param_1) [16],longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  uVar2 = param_2[1];
  FUN_1800f5540(0,uVar2,param_3,param_4,1);
  if (uVar2 != 0) {
    lVar3 = *param_2;
    do {
      if ((*(char *)(lVar3 + uVar7) == '%') && (uVar7 + 2 < uVar2)) {
        bVar1 = *(byte *)(lVar3 + 1 + uVar7);
        if ((byte)(bVar1 - 0x30) < 10) {
          iVar6 = (char)bVar1 + -0x30;
        }
        else {
          iVar6 = tolower((uint)bVar1);
          if ((byte)((char)iVar6 + 0x9fU) < 6) {
            iVar6 = (char)iVar6 + -0x57;
          }
          else {
            iVar6 = -1;
          }
        }
        bVar1 = *(byte *)(lVar3 + 2 + uVar7);
        if ((byte)(bVar1 - 0x30) < 10) {
          iVar4 = (char)bVar1 + -0x30;
        }
        else {
          iVar4 = tolower((uint)bVar1);
          if ((byte)((char)iVar4 + 0x9fU) < 6) {
            iVar4 = (char)iVar4 + -0x57;
          }
          else {
            iVar4 = -1;
          }
        }
        if ((iVar6 < 0) || (iVar4 < 0)) goto LAB_180166453;
        FUN_18015af80(param_1,(char)iVar6 << 4 | (byte)iVar4);
        uVar7 = uVar7 + 2;
      }
      else {
LAB_180166453:
        cVar5 = *(char *)(lVar3 + uVar7);
        if (cVar5 == '+') {
          cVar5 = ' ';
        }
        FUN_18015af80(param_1,cVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return param_1;
}



