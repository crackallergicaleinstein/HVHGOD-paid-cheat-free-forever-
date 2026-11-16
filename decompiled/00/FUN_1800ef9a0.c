// FUN_1800ef9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef9a0 */

undefined8 * FUN_1800ef9a0(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_c8;
  undefined8 auStack_c0 [3];
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  
  if (param_1 != (char *)*param_3) {
    FUN_18015bae0(&local_c8,"iterator does not fit current value");
    FUN_1800f6e80(local_a8,0xca,&local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_a8,&DAT_1808d0fe8);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  puVar3 = (undefined1 *)*param_2;
  switch(*puVar3) {
  default:
    param_2[3] = 1;
    break;
  case 1:
    param_2[1] = **(undefined8 **)(puVar3 + 8);
    break;
  case 2:
    param_2[2] = *(undefined8 *)(*(longlong *)(puVar3 + 8) + 8);
  }
  cVar1 = *param_1;
  switch(cVar1) {
  default:
    local_c8 = FUN_180112a50(param_1);
    uVar8 = FUN_1800f6bd0(local_a8,"cannot use erase() with ",&local_c8);
    FUN_1800f6ca0(local_70,0x133,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_70,&DAT_1808d1050);
  case '\x01':
    uVar8 = FUN_180140da0(*(undefined8 *)(param_1 + 8),param_3[1]);
    param_2[1] = uVar8;
    break;
  case '\x02':
    puVar4 = (undefined1 *)param_3[2];
    lVar5 = *(longlong *)(param_1 + 8);
    puVar6 = *(undefined8 **)(lVar5 + 8);
    puVar3 = puVar4;
    for (puVar9 = (undefined8 *)(puVar4 + 0x10); puVar9 != puVar6; puVar9 = puVar9 + 2) {
      uVar8 = *puVar9;
      uVar7 = puVar9[1];
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      uVar2 = *puVar3;
      *puVar3 = (char)uVar8;
      local_c8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),uVar2);
      auStack_c0[0] = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = uVar7;
      FUN_1801409d0(auStack_c0);
      puVar3 = puVar3 + 0x10;
    }
    FUN_1800aab30(*(longlong *)(lVar5 + 8) + -0x10);
    *(longlong *)(lVar5 + 8) = *(longlong *)(lVar5 + 8) + -0x10;
    param_2[2] = puVar4;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
    if (param_3[3] != 0) {
      FUN_18015bae0(&local_c8,"iterator out of range");
      FUN_1800f6e80(local_a8,0xcd,&local_c8);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_a8,&DAT_1808d0fe8);
    }
    if (cVar1 == '\x03') {
      FUN_18015c010(*(undefined8 *)(param_1 + 8));
      uVar8 = 0x20;
LAB_1800efa6a:
      FUN_1804547d0(*(undefined8 *)(param_1 + 8),uVar8);
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if (cVar1 == '\b') {
      FUN_180113710(*(undefined8 *)(param_1 + 8));
      uVar8 = 0x28;
      goto LAB_1800efa6a;
    }
    *param_1 = '\0';
  }
  return param_2;
}



