from django.forms import ModelForm, Form
from django import forms
from pbspy.models import Game
from django.utils.translation import ugettext as _

class GameForm(ModelForm):
    class Meta:
        model = Game
        fields = ['name', 'description', 'hostname', 'port',
                  'manage_port', 'pb_remote_password', 'url']


class GameManagementTimerForm(Form):
    timer = forms.IntegerField(label=_('New timer (h)'), min_value=0, max_value=9999)


class GameManagementChatForm(Form):
    message = forms.CharField(label=_('Text message'))

class GameManagementMotDForm(Form):
    message = forms.CharField(label=_('Text message'))


class GameManagementSaveForm(Form):
    filename = forms.CharField(label=_('Filename (without extension)'), max_length=20)


class GameManagementLoadForm(Form):
    def __init__(self, savegames, *args, **kwargs):
        super(GameManagementLoadForm, self).__init__(*args, **kwargs)
        self.fields['filename'] = forms.ChoiceField(choices=savegames, label=_('Savegame'))


class GameManagementSetPlayerPasswordForm(Form):
    def __init__(self, players, *args, **kwargs):
        super(GameManagementSetPlayerPasswordForm, self).__init__(*args, **kwargs)
        self.fields['player'] = forms.ModelChoiceField(players, label=_('Player'))

    password = forms.CharField(label=_('New password'), min_length=1)