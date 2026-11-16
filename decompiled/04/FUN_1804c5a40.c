// FUN_1804c5a40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c5a40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 FUN_1804c5a40(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  float local_res10;
  float local_res14;
  
  lVar3 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (*(char *)(DAT_180bb8ae8 + 0xae) != '\0') {
    if (*(char *)(DAT_180bb8ae8 + 0x28a0) != '\0') {
      if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 1) == 0) {
        *(int *)(DAT_180bb8ae8 + 0x28f8) = *(int *)(DAT_180bb8ae8 + 0x28f8) + 1;
      }
      else {
        FUN_1804cf3e0("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n",
                      *(undefined1 *)(DAT_180bb8ae8 + 0xad),*(char *)(DAT_180bb8ae8 + 0xae),
                      *(undefined1 *)(DAT_180bb8ae8 + 0xaf));
      }
    }
    if ((*(byte *)(lVar3 + 0x28cc) & 1) == 0) {
      *(int *)(lVar3 + 0x28f8) = *(int *)(lVar3 + 0x28f8) + 1;
    }
    else if (lVar2 == 0) {
      FUN_1804cf3e0("[imgui-error] In window \'%s\': %s\n",&DAT_1808595bc,param_1);
    }
    else {
      FUN_1804cf3e0("[imgui-error] In window \'%s\': %s\n",*(undefined8 *)(lVar2 + 8),param_1);
    }
  }
  *(undefined1 *)(lVar3 + 0x28a0) = 0;
  if (*(char *)(lVar3 + 0xaf) != '\0') {
    if (*(char *)(lVar3 + 1) != '\0') {
      cVar4 = FUN_1804c5ef0();
      if (cVar4 != '\0') {
        iVar1 = *(int *)(lVar3 + 0x28a4);
        if (iVar1 < 0x14) {
          if (lVar2 == 0) {
            FUN_1804f4780("In window \'%s\': %s",&DAT_1808595bc,param_1);
          }
          else {
            FUN_1804f4780("In window \'%s\': %s",*(undefined8 *)(lVar2 + 8),param_1);
            if ((*(char *)(lVar2 + 0xd5) == '\0') || (*(char *)(lVar2 + 0xcd) != '\0')) {
              uVar5 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
              local_res10 = *(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x30);
              local_res14 = *(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x34);
              FUN_1804de7c0(uVar5,(float *)(lVar2 + 0x28),&local_res10,0xff0000ff,0,0x3f800000,0);
            }
          }
          iVar1 = *(int *)(lVar3 + 0x28a4);
        }
        if (iVar1 == 0x14) {
          FUN_1804f4780("(and more errors)");
        }
        FUN_1804c14e0();
      }
    }
    *(int *)(lVar3 + 0x28a4) = *(int *)(lVar3 + 0x28a4) + 1;
  }
  if (*(code **)(lVar3 + 0x2888) != (code *)0x0) {
    (**(code **)(lVar3 + 0x2888))(lVar3,*(undefined8 *)(lVar3 + 0x2890),param_1);
  }
  return *(undefined1 *)(lVar3 + 0xad);
}



