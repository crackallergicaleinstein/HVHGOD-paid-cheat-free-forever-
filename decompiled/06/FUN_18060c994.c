// FUN_18060c994 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060c994 */

undefined4 FUN_18060c994(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x460) == 0) {
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar3;
joined_r0x00018060ca18:
      if (iVar3 == 2) {
        return *(undefined4 *)(param_1 + 0x20);
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
LAB_18060cc5e:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              cVar2 = **(char **)(param_1 + 0x10);
              *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
              *(char *)(param_1 + 0x39) = cVar2;
              if ((cVar2 == '\0') || (*(int *)(param_1 + 0x20) < 0)) goto LAB_18060cc76;
              if ((byte)(cVar2 - 0x20U) < 0x5b) {
                bVar4 = (&DAT_1806ae191)[(ulonglong)((int)cVar2 - 0x20U & 0x7f) * 2];
              }
              else {
                bVar4 = 0;
              }
              bVar4 = (&DAT_1806ae190)
                      [(ulonglong)((uint)bVar4 * 9 + (uint)*(byte *)(param_1 + 0x24) & 0x7f) * 2];
              *(byte *)(param_1 + 0x24) = bVar4;
              if (7 < bVar4) goto LAB_18060ccde;
              if (bVar4 != 0) break;
              lVar5 = *(longlong *)(param_1 + 8);
              *(undefined1 *)(param_1 + 0x4c) = 0;
              if (*(char *)(lVar5 + 0x28) == '\0') {
                FUN_18060e230(lVar5);
              }
              cVar2 = *(char *)(param_1 + 0x39);
              if ((-2 < cVar2) &&
                 ((*(ushort *)(**(longlong **)(lVar5 + 0x18) + (longlong)cVar2 * 2) & 0x8000) != 0))
              {
                lVar5 = *(longlong *)(param_1 + 0x460);
                if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
                  if (*(char *)(lVar5 + 0x18) == '\0') {
                    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                  }
                  else {
                    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  }
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                  *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
                  *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                  **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
                }
                cVar2 = **(char **)(param_1 + 0x10);
                *(char **)(param_1 + 0x10) = *(char **)(param_1 + 0x10) + 1;
                *(char *)(param_1 + 0x39) = cVar2;
                if (cVar2 == '\0') {
                  lVar5 = *(longlong *)(param_1 + 8);
                  *(undefined1 *)(lVar5 + 0x30) = 1;
                  *(undefined4 *)(lVar5 + 0x2c) = 0x16;
                  FUN_18060aa1c(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
                  goto LAB_18060ccde;
                }
              }
              lVar5 = *(longlong *)(param_1 + 0x460);
              if (*(longlong *)(lVar5 + 0x10) == *(longlong *)(lVar5 + 8)) {
                if (*(char *)(lVar5 + 0x18) == '\0') {
                  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                }
              }
              else {
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 1;
                *(char *)**(undefined8 **)(param_1 + 0x460) = cVar2;
                **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
              }
            }
            if (bVar4 != 1) break;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(undefined1 *)(param_1 + 0x4c) = 0;
          }
          if (bVar4 != 2) break;
          if (cVar2 == ' ') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
          }
          else if (cVar2 == '#') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
          }
          else if (cVar2 == '+') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
          }
          else if (cVar2 == '-') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
          }
          else if (cVar2 == '0') {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
          }
        }
        if (bVar4 == 3) {
          if (cVar2 != '*') {
            lVar5 = param_1 + 0x2c;
            goto LAB_18060cacd;
          }
          piVar1 = *(int **)(param_1 + 0x18);
          *(int **)(param_1 + 0x18) = piVar1 + 2;
          iVar3 = *piVar1;
          *(int *)(param_1 + 0x2c) = iVar3;
          if (iVar3 < 0) {
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
            *(int *)(param_1 + 0x2c) = -iVar3;
          }
LAB_18060cb22:
          cVar2 = '\x01';
        }
        else {
          if (bVar4 == 4) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            goto LAB_18060cc5e;
          }
          if (bVar4 == 5) {
            if (cVar2 == '*') {
              piVar1 = *(int **)(param_1 + 0x18);
              *(int **)(param_1 + 0x18) = piVar1 + 2;
              iVar3 = *piVar1;
              *(int *)(param_1 + 0x30) = iVar3;
              if (iVar3 < 0) {
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
              }
              goto LAB_18060cb22;
            }
            lVar5 = param_1 + 0x30;
LAB_18060cacd:
            cVar2 = FUN_18060c580(param_1,lVar5);
          }
          else if (bVar4 == 6) {
            cVar2 = FUN_18060d1f4(param_1);
          }
          else {
            if (bVar4 != 7) {
              return 0xffffffff;
            }
            cVar2 = FUN_18060d8b4(param_1);
          }
        }
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
      } while( true );
    }
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    lVar5 = *(longlong *)(param_1 + 8);
  }
LAB_18060c9ec:
  FUN_18060aa1c(0,0,0,0,0,lVar5);
  return 0xffffffff;
LAB_18060cc76:
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x24) != '\a')) {
LAB_18060ccde:
    lVar5 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar5 + 0x30) = 1;
    *(undefined4 *)(lVar5 + 0x2c) = 0x16;
    lVar5 = *(longlong *)(param_1 + 8);
    goto LAB_18060c9ec;
  }
  *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
  iVar3 = *(int *)(param_1 + 0x468);
  goto joined_r0x00018060ca18;
}



